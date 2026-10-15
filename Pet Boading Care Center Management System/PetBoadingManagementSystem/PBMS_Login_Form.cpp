#include "PBMS_Login_Form.h"

using namespace System;
using namespace System::Windows::Forms;

int Main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    PetBoadingManagementSystem::PBMS_Login_Form form;
    Application::Run(% form);
    return 0;
}