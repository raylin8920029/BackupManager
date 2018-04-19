#include "CWorker.h"
//#include "WTypes.h"
//#include "wchar.h"
#include "errordef.h"
#include "defs.h"
#include "stdio.h"

SCODE CWorker::IsAvailablePath(const wchar_t *pszPath)
{
	if (pszPath == NULL) return S_FAIL;

	int		iRet = 0;
	FILE	*fTmpFile = nullptr;
	wchar_t	szTmpFilePath[URANUS_MAX_PATH_LEN + 1] = { 0 };

	// Check the directory is writable
	swprintf(szTmpFilePath, URANUS_MAX_PATH_LEN + 1, L"%s\\WritableTest", pszPath);

	fTmpFile = _wfopen(szTmpFilePath, L"w");
	MIOLNIR_RunWithCondition((nullptr == fTmpFile), return S_FAIL;);

	fclose(fTmpFile);

	// Delete the temp file to check the directory is deletable
	iRet = _wremove(szTmpFilePath);
	MIOLNIR_RunWithCondition((0 != iRet), return S_FAIL;);

	return S_OK;
}