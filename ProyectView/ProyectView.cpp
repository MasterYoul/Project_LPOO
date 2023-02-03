#include "pch.h"
#include "ProyectMainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Main(array<System::String^>^ args) {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //LPOOInduction is your project name

    ProyectView::ProyectMainForm form;
    Application::Run(% form);
    return 0;
}

