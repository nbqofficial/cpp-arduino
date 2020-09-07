#pragma once

#include <Windows.h>
#include <iostream>
#include <devguid.h>
#include <SetupAPI.h>

#pragma comment (lib, "Setupapi.lib")

class arduino
{
	private:

		HANDLE arduino_handle = NULL;

	public:

		arduino();

		arduino(LPCSTR device_name);

		~arduino();

		bool attach(LPCSTR device_name);

		bool detach();

		bool scan_devices(LPCSTR device_name, LPSTR lp_out);

		bool send_data(char* buffer, DWORD buffer_size);
};