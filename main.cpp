#include <Windows.h>
#include <string>
#include "utils.hpp"
#include "includes.hpp"
#include "SDK.hpp"
#include "Overwatch.hpp"
#include <io.h>
#include <process.h>
#include <stdio.h>
#include <stdlib.h>

void MainThread() {
	using namespace OW;
	std::cout << "Launch in Main Menu.\n";
	while (!SDK->Initialize())
	{
		std::cout << "Waiting Overwatch..\n";//tg
		Sleep(3000);
	}


	_beginthread((_beginthread_proc_type)entity_scan_thread, 0, 0);
	Sleep(100);
	_beginthread((_beginthread_proc_type)entity_thread, 0, 0);
	_beginthread((_beginthread_proc_type)viewmatrix_thread, 0, 0);
	Sleep(500);
	_beginthread((_beginthread_proc_type)aimbot_thread, 0, 0);
	_beginthread((_beginthread_proc_type)overlay_thread, 0, 0);
	_beginthread((_beginthread_proc_type)configsavenloadthread, 0, 0);	
	Sleep(100);
	_beginthread((_beginthread_proc_type)looprpmthread, 0, 0);


	while (FindWindowA(skCrypt("TankWindowClass"), NULL))
	{
		auto viewMatrixVal = SDK->RPM<uint64_t>(((SDK->RPM<uint64_t>(SDK->dwGameBase + offset::Address_viewmatrix_base) - offset::offset_viewmatrix_xor_key) ^ offset::offset_viewmatrix_xor_key2) + offset::offset_viewmatrix_xor_key3);
		viewMatrixVal = SDK->RPM<uint64_t>(viewMatrixVal + 0x48);
		viewMatrix_xor_ptr = viewMatrixVal + 0x140;
		auto view = SDK->RPM<uint64_t>(SDK->dwGameBase + offset::Address_viewmatrix_base_test) + offset::offset_viewmatrix_ptr;
		viewMatrixPtr = view;

		Sleep(100);
	}
}

int main()
{
	MainThread();
	std::string consoleTitle = (std::string)("loader ow2");
	SetConsoleTitleA(consoleTitle.c_str());
	std::cout << ("\n\nConnecting to server..");
	using namespace OW;

	std::cout << "Loading functions..\n";
	MainThread();
	Sleep(1000);
	exit(0);
}



