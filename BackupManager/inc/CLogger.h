#pragma once
#include <string>
#include <memory>
#include "Defs.h"
#include "spdlog/spdlog.h"

class CLogger
{
public:
	CLogger(void);
	void OutputLogTemplate(ELogType tpye, const std::string &message, std::shared_ptr<spdlog::logger> spSpdLogger);
	void OutputConsoleLog(ELogType tpye, const std::string &message);
	void OutputRotatingFiles(ELogType tpye, const std::string &message);
	void Log_Out(ELogType tpye, const std::string &message);

	//Not implement yet
	void CreateLogFile();
	void OutputConsoleLogWithElastic(ELogType tpye, const std::string &message);

private:
	std::shared_ptr<spdlog::logger> m_spConsoleLogger;
	std::shared_ptr<spdlog::logger> m_spRotatingFilesLogger;
};
