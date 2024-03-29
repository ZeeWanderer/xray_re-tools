#include <locale.h>

#include "pch.h"
#include "MainWindow.h"

using namespace ConverterUI;

[STAThreadAttribute]
int main(array<String^>^ args) {
	setlocale(LC_ALL, "Rus");

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	Application::Run(gcnew MainWindow(args));

	return 0;
}
