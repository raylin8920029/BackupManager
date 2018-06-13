#pragma once
#include "CLogger.h"

class CDataKeeper
{
public:
	CDataKeeper(void);
	bool IsAvailablePath(const wchar_t *pszPath);

private:
	std::shared_ptr<CLogger> m_spLogger;
};