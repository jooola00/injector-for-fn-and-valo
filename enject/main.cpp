#include "Definition/stdafx.h"
#include "Communication/xor.h"
#include "Communication/api.h"
#include "driver/driver.h"
#include "injection/injector.h"
#include "Communication/drvutils.h"

char ProcWindow[24];
char dllname[24];

void TitleThread()
{
	while (true)
	{
		SetConsoleTitleA(random_string().c_str());
	}
}
std::thread Title(TitleThread);
int main()
{
	// driver initialization
	DriverInitialization();

	cout << endl;

	std::cout << "[+] Injection Destroisgay Please Wait (This Might Take Some Time)";

	Sleep(2000);

	// Injection
	Enject(xor_a("UnrealWindow"), (L"faggot.dll"));

	cout << endl;
	system("pause >nul");
}