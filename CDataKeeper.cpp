#include "CDataKeeper.h"
#include "CWorker.h"

#pragma warning(disable:4996)

CDataKeeper::CDataKeeper(void)
{
	m_spLogger = std::make_shared<CLogger>();
}

bool CDataKeeper::IsAvailablePath(const wchar_t * pszPath)
{
	bool bIsAvailable = false;

	SCODE result = CWorker::IsAvailablePath(pszPath);
	if (result == S_OK)
	{
		bIsAvailable = true;
		m_spLogger->Log_Out(ELogType::Trace, "Path is available.");
	}
	else
	{
		m_spLogger->Log_Out(ELogType::Trace, "Path is not available.");
	}

	return bIsAvailable;
}
