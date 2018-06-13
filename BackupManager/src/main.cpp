#include <iostream>
#include <wchar.h>
#include "CDataKeeper.h"
#include "errordef.h"

#define SPDLOG_TRACE_ON

int main()
{	
	wchar_t m1[] = L"D:\\TestFolder";
	auto objDataKeeper = CDataKeeper();

	SCODE result = objDataKeeper.IsAvailablePath(m1);
	std::cout << "Result is " << result << std::endl;
	system("pause");
}

