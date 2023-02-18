#include "pch.h"
#include "MyForm.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;




int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    die::MyForm form;
    Application::Run(% form);
    

    return 0;
}



   