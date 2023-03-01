ALTER TABLE SALE
DROP CONSTRAINT  FK_SALE_USUARIO_ID
GO
ALTER TABLE SALE
DROP CONSTRAINT  FK_SALE_TABLE_ID
GO
ALTER TABLE SALE_DETAIL
DROP CONSTRAINT  FK_SALE_DETAIL_SALE_ID 

GO
ALTER TABLE SALE_DETAIL
DROP CONSTRAINT  FK_SALE_DETAIL_MEALS_ID
GO

IF OBJECT_ID('dbo.USUARIO', 'U') IS NOT NULL DROP TABLE dbo.USUARIO
	
GO
	IF OBJECT_ID('dbo.TABLEDETAIL', 'U') IS NOT NULL DROP TABLE dbo.TABLEDETAIL
GO

IF OBJECT_ID('dbo.MEALS', 'U') IS NOT NULL DROP TABLE dbo.MEALS
GO
IF OBJECT_ID('dbo.SALE_DETAIL', 'U') IS NOT NULL DROP TABLE dbo.SALE_DETAIL
		
GO
IF OBJECT_ID('dbo.SALE', 'U') IS NOT NULL DROP TABLE dbo.SALE
		
GO
	
IF OBJECT_ID('dbo.MEALS', 'U') IS NOT NULL DROP TABLE dbo.MEALS
GO

IF OBJECT_ID('dbo.CLIENT_INFO', 'U') IS NOT NULL DROP TABLE dbo.CLIENT_INFO



GO
CREATE TABLE MEALS (
	Id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	Name VARCHAR (250) NOT NULL,
	Description VARCHAR (500) NOT NULL,
	Price DECIMAL(10,2) NOT NULL,
	Stock INT NOT NULL,
	DateMeal VARCHAR(150) NOT NULL,
	StockUsed INT NOT NULL,
	Status CHAR(1) NULL,
	Photo IMAGE NULL,
	TotalMeals DECIMAL(10,2) NULL,
	)
	GO
INSERT INTO MEALS(Name,Description,Price,Stock,DateMeal,StockUsed,Status)
VALUES('Arroz con pollo','arroz y pollo',15,0,'t',0,'A')

	GO
	CREATE TABLE USUARIO (
	Id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	Name VARCHAR (250) NOT NULL,
	DocNumber VARCHAR (250) NOT NULL UNIQUE,
	Adress VARCHAR (500) NOT NULL,
	Email VARCHAR(250) NOT NULL UNIQUE,
	PhoneNumber VARCHAR(250) NOT NULL,
	Status CHAR(1) NULL,
	LastName VARCHAR (250) NOT NULL,
	Salary DECIMAL(10,2) NULL,
	Username VARCHAR (250) NOT NULL,
	Password VARCHAR (250) NOT NULL,
	Gender CHAR(1) NOT NULL,
	Birthday DATE NOT NULL,
	Type VARCHAR(120) NOT NULL,
	State VARCHAR(120) NOT NULL,

	)
	GO
INSERT INTO USUARIO(Name, DocNumber, Adress,Email, PhoneNumber,Status,LastName,Salary,Username,Password,Gender,Birthday, Type, State)
VALUES ('Samid','78549545','cusco','capu.samid.villafuerte@gmail.com','78549545','A','Villafuerte',1111,'Samid','george','1','10/03/2002','Administrador','A')
GO
CREATE TABLE TABLEDETAIL(
		Id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
        Floor INT NOT NULL,
        TableCapacity INT NOT NULL,
        Disponibility VARCHAR (250) NOT NULL,
        Reserved VARCHAR (250) NULL,
        TimeReserv VARCHAR (250) NULL,
		Status CHAR(1) NULL,
        )
		GO
INSERT INTO TABLEDETAIL(Floor, TableCapacity, Disponibility,Reserved, TimeReserv,Status)
VALUES ('2','6','No Disponible','Reservado','13:00','A')

		GO
CREATE TABLE SALE(
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	transaction_date DATE NOT NULL,
	Fecha DATE NOT NULL,
	Status CHAR(1) NULL,
	Estado VARCHAR(250) NULL,
	total DECIMAL(10, 2) NOT NULL,
	usuario_id INT NOT NULL,
	table_id INT NULL
)
GO
INSERT INTO SALE(transaction_date, Fecha, status,Estado, total,usuario_id,table_id)
VALUES ('20 de marzo de 2012','20032012','A','No Preparado','15','2','3')

GO
ALTER TABLE SALE
ADD CONSTRAINT FK_SALE_USUARIO_ID FOREIGN KEY (usuario_id)
REFERENCES USUARIO(id)
ON DELETE CASCADE
GO
ALTER TABLE SALE
ADD CONSTRAINT FK_SALE_TABLE_ID FOREIGN KEY (table_id)
REFERENCES TABLEDETAIL(id)
ON DELETE NO ACTION
GO

CREATE TABLE SALE_DETAIL (
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	sale_id INT NOT NULL,
	meals_id INT NOT NULL,
	quantity INT NULL,
	subtotal DECIMAL(10,2) NULL,
	unit_price DECIMAL(10,2) NULL,
	estado VARCHAR (200) NULL
)
GO
INSERT INTO SALE_DETAIL(sale_id, meals_id, quantity, subtotal, unit_price, estado)
VALUES ('1','2','10','13.50','13.50','No Preparado')

GO
ALTER TABLE SALE_DETAIL
ADD CONSTRAINT FK_SALE_DETAIL_SALE_ID FOREIGN KEY (sale_id)
REFERENCES SALE(id)
ON DELETE CASCADE
GO
ALTER TABLE SALE_DETAIL
ADD CONSTRAINT FK_SALE_DETAIL_MEALS_ID FOREIGN KEY (meals_id)
REFERENCES MEALS(id)
GO

GO
CREATE TABLE CLIENT_INFO (
	Id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	DocNumber VARCHAR (250) NOT NULL,
	Name VARCHAR (250) NOT NULL,
	LastName VARCHAR (250) NULL,
	PhoneNumber VARCHAR (250) NULL,
	VisitQuantity INT NOT NULL,
	Type CHAR(1) NULL,
	RucNumber VARCHAR (250) NULL,
	Rate INT NULL,
	TxtOpin VARCHAR (500) NULL,
	Status CHAR(1) NULL,
	
	Gender CHAR(1) NULL,
	)
INSERT INTO CLIENT_INFO(DocNumber,Name,LastName,PhoneNumber,VisitQuantity,Type,RucNumber,Rate,TxtOpin,Status,Gender)
VALUES('123','Joel','Espinoza','913768297','4','P','332','5','t','A','F')
-- Last execute-----

--PROCEDURES DE MEALS ----
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_AddMeals]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddMeals]
END
GO
CREATE PROCEDURE usp_AddMeals(
	@name VARCHAR(250),
	@description VARCHAR(500),
	@price DECIMAL(10,2),
	@stock INT,
	@StockUsed INT,
	@DateMeal VARCHAR(150),
	@status CHAR(1),
	@TotalMeals DECIMAL(10,2),
	@photo IMAGE,
	@id INT OUT
) AS
	BEGIN
		INSERT INTO MEALS (name, description, price, stock, StockUsed, DateMeal, status, TotalMeals, photo)
		SELECT @name, @description, @price, @stock,@StockUsed,@DateMeal, @status,@TotalMeals,@photo
		SET @id = SCOPE_IDENTITY()
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_UpdateMeals]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_UpdateMeals
END
GO
CREATE PROCEDURE usp_UpdateMeals(
	@name VARCHAR(250),
	@description VARCHAR(500),
	@price DECIMAL(10,2),
	@stock INT,
	@StockUsed INT,
	@DateMeal VARCHAR(150),
	@status CHAR(1),
	@TotalMeals DECIMAL(10,2),
	@photo IMAGE,
	@id INT OUT
) AS
	BEGIN
		UPDATE MEALS 
		SET name=@name, description=@description, price=@price, stock=@stock, StockUsed=@StockUsed, DateMeal=@DateMeal, status=@status, TotalMeals=@TotalMeals, photo=@photo
		WHERE id=@id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_QueryMealsByNameOrDesc]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_QueryMealsByNameOrDesc
END
GO
CREATE PROCEDURE usp_QueryMealsByNameOrDesc(
	@value VARCHAR(500)
) AS
	SELECT * FROM MEALS
	WHERE	name LIKE '%' + @value + '%' OR
			description LIKE '%' + @value + '%'
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_QueryAllMeals]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_QueryAllMeals
END
GO
CREATE PROCEDURE usp_QueryAllMeals AS
	SELECT * FROM MEALS
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_QueryMealsById]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_QueryMealsById
END
GO
CREATE PROCEDURE usp_QueryMealsById(
	@id INT
) AS
	SELECT * FROM MEALS
	WHERE	id = @id
GO
--- EXECUTED--
--LAST EXECUTE--
--- PROCEDURES DE USUARIO ----
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[[usp_AddUsuario]]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddUsuario]
END
GO
CREATE PROCEDURE [usp_AddUsuario](
	
	@Name VARCHAR (250) ,
	@DocNumber VARCHAR (250) ,
	@Adress VARCHAR (500) ,
	@Email VARCHAR(250),
	@Status CHAR(1) ,
	@LastName VARCHAR (250) ,
	@Salary DECIMAL(10,2),
	@Username VARCHAR (250), 
	@Password VARCHAR (250),
	@Gender CHAR(1) ,
	@Birthday DATE ,
	@Type VARCHAR(120) ,
	@State VARCHAR(120),
	@Id INT out
) AS
	BEGIN
		INSERT INTO USUARIO (name, DocNumber, Adress, Email, Status, LastName, Salary, Username, Password, Gender, Birthday, Type, State )
		SELECT @name, @DocNumber, @Adress, @Email, @Status, @LastName, @Salary, @Username, @Password, @Gender, @Birthday, @Type, @State
		SET @id = SCOPE_IDENTITY()
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_UpdateUsuario]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_UpdateUsuario
END
GO
CREATE PROCEDURE usp_UpdateUsuario(
	@Name VARCHAR (250) ,
	@DocNumber VARCHAR (250) ,
	@Adress VARCHAR (500) ,
	@Email VARCHAR(250),
	@Status CHAR(1) ,
	@LastName VARCHAR (250) ,
	@Salary DECIMAL(10,2),
	@Username VARCHAR (250), 
	@Password VARCHAR (250),
	@Gender CHAR(1) ,
	@Birthday DATE ,
	@Type VARCHAR(120) ,
	@State VARCHAR(120),
	@Id INT out
) AS
	BEGIN
		UPDATE USUARIO
		SET name=@name, DocNumber=@DocNumber, Adress=@Adress, Email=@Email, Status=@Status, LastName=@LastName, status=@status, Salary=@Salary, Username=@Username,
				 Password=@Password, Gender=@Gender, Birthday=@Birthday, Type=@Type, State=@State
		WHERE id=@id
	END
GO


--DUDAS EN ESTE QUERY: ---
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_QueryUsuarioByNameOrDocNumber]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_QueryUsuarioByNameOrDocNumber
END
GO
CREATE PROCEDURE usp_QueryUsuarioByNameOrDocNumber(
	@value VARCHAR(500)
) AS
	SELECT * FROM USUARIO
	WHERE	name LIKE '%' + @value + '%' OR
			DocNumber LIKE '%' + @value + '%'
GO
---- 

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_QueryAllUsuario]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_QueryAllUsuario
END
GO
CREATE PROCEDURE usp_QueryAllUsuario AS
	SELECT * FROM USUARIO
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_QueryUsuarioById]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_QueryUsuarioById
END
GO
CREATE PROCEDURE usp_QueryUsuarioById(
	@id INT
) AS
	SELECT * FROM USUARIO
	WHERE	id = @id
GO

-- PROCEDURES DE TABLE DETAIL --
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddTableDetail]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddTableDetail]
END


GO
CREATE PROCEDURE usp_AddTableDetail(
	
	@Floor INT ,
	@TableCapacity INT ,
	@Disponibility VARCHAR (250) ,
	@Reserved VARCHAR (250),
	@TimeReserv VARCHAR (250) ,
	@Status CHAR(1),
	@Id INT out
) AS
	BEGIN
		INSERT INTO TABLEDETAIL(Floor, TableCapacity, Disponibility, Reserved, TimeReserv,Status)
		SELECT @Floor, @TableCapacity, @Disponibility, @Reserved, @TimeReserv,@Status
		SET @Id = SCOPE_IDENTITY()
	END


GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateTableDetail]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateTableDetail]
END
GO
CREATE PROCEDURE usp_UpdateTableDetail(
	@Id INT,
	@Floor INT ,
	@TableCapacity INT ,
	@Disponibility VARCHAR (250),
	@Reserved VARCHAR (250),
	@TimeReserv VARCHAR (250),
	@Status CHAR(1)
) AS
	BEGIN
		UPDATE TABLEDETAIL 
		SET Floor=@Floor, TableCapacity=@TableCapacity, Disponibility=@Disponibility, Reserved=@Reserved, TimeReserv=@TimeReserv, Status=@Status
		WHERE Id=@Id
	END


GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllTableporpisoporcapacidad]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllTableLibreporpisoporcapacidad]
END
GO
CREATE PROCEDURE usp_QueryAllTableLibreporpisoporcapacidad(
	@value INT
) AS
	SELECT * FROM TABLEDETAIL
	WHERE	Floor LIKE '%' + @value + '%' AND
			TableCapacity LIKE '%' + @value + '%' AND
			Disponibility LIKE 'LIBRE' 

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllTableporpisoporcapacidad]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllTableporpisoporcapacidad]
END
GO
CREATE PROCEDURE usp_QueryAllTableporpisoporcapacidad(
	@value INT
) AS
	SELECT * FROM TABLEDETAIL
	WHERE	Floor LIKE '%' + @value + '%' OR
			TableCapacity LIKE '%' + @value + '%'

GO			
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllTableOcupadaporpisoporcapacidad]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllTableOcupadaporpisoporcapacidad]
END
GO
CREATE PROCEDURE usp_QueryAllTableOcupadaporpisoporcapacidad(
	@value INT
) AS
	SELECT * FROM TABLEDETAIL
	WHERE	Floor LIKE '%' + @value + '%' AND
			TableCapacity LIKE '%' + @value + '%' AND
			Disponibility LIKE 'NO DISPONIBLE' 

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllTableporpiso]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllTableporpiso]
END
GO
CREATE PROCEDURE usp_QueryAllTableporpiso(
	@Floor INT
) AS
	SELECT * FROM TABLEDETAIL
	WHERE	Floor = @Floor

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllTableporcapacidad]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllTableporcapacidad]
END
GO
CREATE PROCEDURE usp_QueryAllTableporcapacidad(
	@TableCapacity INT 
) AS
	SELECT * FROM TABLEDETAIL
	WHERE	TableCapacity = @TableCapacity

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllTableLibre]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllTableLibre]
END

GO
CREATE PROCEDURE usp_QueryAllTableLibre(
	@value INT
) AS
	SELECT * FROM TABLEDETAIL
	WHERE	Disponibility LIKE 'DISPONIBLE' 

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryTableDetailtById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryTableDetailtById]
END
GO
CREATE PROCEDURE usp_QueryTableDetailtById(
	@Id INT 
) AS
	SELECT * FROM TABLEDETAIL
	WHERE	Id = @Id

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryTableDetailOcupado]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryTableDetailOcupado]
END

GO
CREATE PROCEDURE usp_QueryTableDetailOcupado(
	@value INT
) AS
	SELECT * FROM TABLEDETAIL
	WHERE	Disponibility LIKE 'NO DISPONIBLE' 
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllTableDetail]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllTableDetail]
END
GO
CREATE PROCEDURE usp_QueryAllTableDetail AS
	SELECT * FROM TABLEDETAIL

--GO
--IF EXISTS ( SELECT * 
--            FROM   sysobjects 
--           WHERE  id = object_id(N'[dbo].[usp_DeleteTableDetail]') 
--                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
--BEGIN
--    DROP PROCEDURE [dbo].[usp_DeleteTableDetail]
--END
--GO
--CREATE PROCEDURE dbo.usp_DeleteTableDetail(
--	@Id INT
--) AS
--	BEGIN
--		UPDATE TABLEDETAIL
--		SET status = 'I'
--		WHERE Id=@Id
--	END
	

-- SALES Procedures --

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddSale]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )

BEGIN
    DROP PROCEDURE [dbo].[usp_AddSale]
END
GO
CREATE PROCEDURE dbo.usp_AddSale(
	@transaction_date DATE,
	@Fecha DATE, 
	@status CHAR(1),
	@Estado VARCHAR(250),
	@total DECIMAL(10, 2),
	@usuario_id INT,
	@table_id INT ,
	@id INT OUT
)
AS
	BEGIN
		INSERT INTO SALE(transaction_date, Fecha, status,Estado, total,usuario_id,table_id)
		SELECT @transaction_date, @Fecha, @status, @Estado, @total, @usuario_id, @table_id
		
		SET @id=SCOPE_IDENTITY()
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllSale]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllSale]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllSale
AS
	SELECT *
	FROM SALE
--	INNER JOIN PREMISE P ON S.id = P.id
--	INNER JOIN EMPLOYEE E ON S.store_manager_id = E.id
--	INNER JOIN PERSON PE ON E.id = PE.id
--	INNER JOIN DISTRICT D ON P.district_id = D.id
	ORDER BY id

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateSale]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateSale]
END
GO
CREATE PROCEDURE usp_UpdateSale(
	@transaction_date DATE,
	@Fecha DATE, 
	@status CHAR(1),
	@Estado VARCHAR(250),
	@total DECIMAL(10, 2),
	@usuario_id INT,
	@table_id INT ,
	@id INT OUT
) AS
	BEGIN
		UPDATE SALE 
		SET transaction_date=@transaction_date, Fecha=@Fecha, status=@status, Estado=@Estado, total=@total, usuario_id=@usuario_id, table_id=@table_id, id=@id
		WHERE Id=@Id
	END


GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteSale]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteSale]
END
GO
CREATE PROCEDURE dbo.usp_DeleteSale(
	@id INT
) AS
	BEGIN
		UPDATE SALE
		SET status = 'I'
		WHERE id=@Id
	END

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_QuerySaletById]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_QuerySaletById
END
GO
CREATE PROCEDURE usp_QuerySaletById(
	@id INT
) AS
	SELECT * FROM SALE
	WHERE	id = @id

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_QueryLastSaleId]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_QueryLastSaleId
END
GO
CREATE PROCEDURE usp_QueryLastSaleId
    @lastTableId INT OUTPUT
AS
BEGIN
    SET NOCOUNT ON;

    SELECT @lastTableId = MAX(id)
    FROM SALE;
END

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[[usp_RegisterSale]]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_RegisterSale
END
GO
CREATE PROCEDURE RegisterSale   
	@transaction_date DATE, 
	@Fecha DATE,
	@status CHAR(1) ,
	@Estado VARCHAR(250) ,
	@total DECIMAL(10, 2) ,
	@usuario_id INT ,
	@table_id INT,
	@id INT out
AS
BEGIN
    INSERT INTO SALE(transaction_date, Fecha, status,Estado,total,usuario_id,table_id)
    VALUES (@transaction_date, @Fecha, @status,@Estado,@total,@usuario_id,@table_id)
END


-- Client Info Procedures --
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddClient_Info]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddClient_Info]
END
GO
CREATE PROCEDURE usp_AddClient_Info(
	@DocNumber VARCHAR (250),
	@Name VARCHAR (250),
	@LastName VARCHAR (250),
	@PhoneNumber VARCHAR (250),
	@VisitQuantity INT,
	@Type CHAR(1),
	@RucNumber VARCHAR (250),
	@Rate INT,
	@TxtOpin VARCHAR (500),
	@Status CHAR(1),
	@Gender CHAR(1),
	@Id INT out
) AS
	BEGIN
		INSERT INTO CLIENT_INFO(DocNumber,Name,LastName,PhoneNumber,VisitQuantity,Type,RucNumber,Rate,TxtOpin,Status,Gender)
		SELECT @DocNumber, @Name, @LastName, @PhoneNumber, @VisitQuantity, @Type, @RucNumber, @Rate, @TxtOpin, @Status, @Gender
		SET @Id = SCOPE_IDENTITY()
	END

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryClient_InfotById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryClient_InfotById]
END
GO
CREATE PROCEDURE usp_QueryClient_InfotById(
	@Id INT 
) AS
	SELECT * FROM CLIENT_INFO
	WHERE	Id = @Id

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllClient_Info]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllClient_Info]
END
GO
CREATE PROCEDURE usp_QueryAllClient_Info AS
	SELECT * FROM CLIENT_INFO

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateClient_Info]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateClient_Info]
END
GO
CREATE PROCEDURE usp_UpdateClient_Info(
	@DocNumber VARCHAR (250),
	@Name VARCHAR (250),
	@LastName VARCHAR (250),
	@PhoneNumber VARCHAR (250),
	@VisitQuantity INT,
	@Type CHAR(1),
	@RucNumber VARCHAR (250),
	@Rate INT,
	@TxtOpin VARCHAR (500),
	@Status CHAR(1),
	@Id INT,
	@Gender CHAR(1)
	
) AS
	BEGIN
		UPDATE CLIENT_INFO 
		SET DocNumber=@DocNumber, Name=@Name, LastName=@LastName, PhoneNumber=@PhoneNumber, VisitQuantity=@VisitQuantity, Type=@Type, RucNumber=@RucNumber, Rate=@Rate, TxtOpin=@TxtOpin, Status=@Status, Gender=@Gender
		WHERE Id=@Id
	END

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteClient_Info]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteClient_Info]
END
GO
CREATE PROCEDURE dbo.usp_DeleteClient_Info(
	@Id INT
) AS
	BEGIN
		UPDATE CLIENT_INFO
		SET Status = 'I'
		WHERE Id=@Id
	END

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryClient_InfoByNameOrLastName]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryClient_InfoByNameOrLastName]
END
GO
CREATE PROCEDURE usp_QueryClient_InfoByNameOrLastName(
	@value VARCHAR (250)
) AS
	SELECT * FROM CLIENT_INFO
	WHERE	Name LIKE '%' + @value + '%' OR
			LastName LIKE '%' + @value + '%'

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryClient_InfoByDocNumber]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryClient_InfoByDocNumber]
END
GO
CREATE PROCEDURE usp_QueryClient_InfoByDocNumber(
	@DocNumber VARCHAR (250) 
) AS
	SELECT * FROM CLIENT_INFO
	WHERE	DocNumber = @DocNumber