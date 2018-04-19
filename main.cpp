#include <iostream>
#include <wchar.h>
#include "CWorker.h"
//#include "WTypes.h"
#include "Tchar.h"
#include "spdlog/spdlog.h"

namespace spd = spdlog;

int main()
{	
	wchar_t m1[] = L"D:\\TestFolder";
	SCODE result = CWorker::IsAvailablePath(m1);
	std::cout << "main function\n" << result << std::endl;
	auto console = spd::stdout_color_mt("console");
	console->info("Welcome to spdlog!");
	console->error("Some error message with arg{}..", 1);
	system("pause");
}

