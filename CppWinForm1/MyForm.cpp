#include "Random.h"
#include "Modexp.h"
#include "Miller.h"
#include "GSD.h"
#include "Key.h"
#include "RSA.h"
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CppWinForm1::MyForm form;
	Application::Run(%form);
}
