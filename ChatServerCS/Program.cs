using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Net;
using System.Net.Sockets;

namespace ChatServer
{
    public class ClientHandler
    {
        TcpClient clientSocket;
        String clientUsername;
        Hashtable clientList;
        public void DoChat()
        {
            byte[] bytesFrom = new byte[100000];
            NetworkStream networkStream = null;
            String dataFromClient = null;
            while (true)
            {
                try
                {
                    if (clientSocket.Connected)
                    {
                        networkStream = clientSocket.GetStream();
                        if (networkStream.DataAvailable)
                        {
                            networkStream.Read(bytesFrom, 0, clientSocket.ReceiveBufferSize);
                            dataFromClient = Encoding.ASCII.GetString(bytesFrom);
                            dataFromClient = dataFromClient.Substring(0, dataFromClient.IndexOf('$'));
                            Console.WriteLine("Del cliente " + clientUsername + " se recibió: " + dataFromClient);
                            Program.Broadcast(dataFromClient, clientUsername, true);
                        }
                    }
                }
                catch (Exception ex)
                {
                    if (networkStream != null)
                        networkStream.Close();
                    CloseChat();
                    Console.WriteLine(ex.Message);
                }
            }
        }

        public void StartClient(TcpClient inClientSocket, String username, Hashtable clientList)
        {
            this.clientSocket = inClientSocket;
            this.clientUsername = username;
            this.clientList = clientList;
            Thread myThread = new Thread(new ThreadStart(DoChat));
            myThread.Start();
        }
        public void CloseChat()
        {
            if (clientUsername != null)
            {
                clientList.Remove(clientUsername);
                clientUsername = null;
            }
            if (clientSocket != null)
            {
                clientSocket.Close();
                clientSocket = null;
            }
        }
    }

    public class Program
    {
        static Hashtable clientList = new Hashtable(); // Variable de clase (global)

        public static void Broadcast(String msg, String username, bool isConnected)
        {
            foreach (DictionaryEntry item in clientList)
            {
                TcpClient broadcastSocket = (TcpClient)item.Value;
                NetworkStream broadcastStream = broadcastSocket.GetStream();
                byte[] broadcastBytes = null;
                if (isConnected)
                    broadcastBytes = Encoding.ASCII.GetBytes(username + " dice: " + msg);
                else
                    broadcastBytes = Encoding.ASCII.GetBytes(msg);
                if (broadcastStream != null)
                {
                    broadcastStream.Write(broadcastBytes, 0, broadcastBytes.Length);
                    broadcastStream.Flush();
                }
            }
        }
        static void Main(string[] args)
        {
            //Console.WriteLine("Hola, qué fácil es C#.");
            //Console.ReadLine();
            Int32 port = 8888;
            IPAddress localAddress = IPAddress.Parse("26.128.102.240");
            TcpListener serverSocket = new TcpListener(localAddress, port);
            TcpClient clientSocket = null;
            String dataFromClient = null;

            serverSocket.Start();
            Console.WriteLine("Servidor de chat iniciado...");
            try
            {
                while (true)
                {
                    //Escuchamos lo que se envía al puerto
                    clientSocket = serverSocket.AcceptTcpClient();
                    byte[] bytesFrom = new byte[100000];
                    NetworkStream networkStream = clientSocket.GetStream();
                    networkStream.Read(bytesFrom, 0, clientSocket.ReceiveBufferSize);
                    dataFromClient = Encoding.ASCII.GetString(bytesFrom);
                    String username = dataFromClient.Substring(0, dataFromClient.IndexOf('$'));
                    Console.WriteLine("Usuario conectado:" + username);
                    clientList.Add(username, clientSocket);
                    ClientHandler client = new ClientHandler();
                    client.StartClient(clientSocket, username, clientList);
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            finally
            {
                if (clientSocket != null)
                    clientSocket.Close();
                if (serverSocket != null)
                    serverSocket.Stop();
            }
        }
    }
}

