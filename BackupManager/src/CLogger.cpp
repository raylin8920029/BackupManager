#include "CLogger.h"


CLogger::CLogger(void)
{
	// Create instance of spdlog.
	m_spConsoleLogger = spdlog::stdout_color_mt("console");
	m_spRotatingFilesLogger = spdlog::rotating_logger_mt(PRODUCT_NAME, LOG_FOLDER_PATH + "/" + LOG_ROTATING_FILE, ROTATING_FILE_SIZE, ROTATING_FILE_NUMBER);
	
	// Set log level to trace.
	m_spConsoleLogger->set_level(spdlog::level::trace);
	m_spRotatingFilesLogger->set_level(spdlog::level::trace);
}

void CLogger::OutputLogTemplate(ELogType tpye, const std::string & message, std::shared_ptr<spdlog::logger> spSpdLogger)
{
	switch (tpye)
	{
	case ELogType::Trace:
		//Need to use macro for file and line info
		SPDLOG_TRACE(spSpdLogger, "SPDLOG_TRACE : {} ", message);
		break;

	case ELogType::Debug:
		SPDLOG_DEBUG(spSpdLogger, "SPDLOG_DEBUG : {} ", message);
		break;

	case ELogType::Info:
		spSpdLogger->info(message);
		break;

	case ELogType::Warn:
		spSpdLogger->warn(message);
		break;

	case ELogType::Err:
		spSpdLogger->error(message);
		break;

	case ELogType::Critical:
		spSpdLogger->critical(message);
		break;

	default:
		break;
	}
}

void CLogger::OutputConsoleLog(ELogType tpye, const std::string &message)
{
	OutputLogTemplate(tpye, message, m_spConsoleLogger);
}

void CLogger::OutputRotatingFiles(ELogType tpye, const std::string & message)
{
	OutputLogTemplate(tpye, message, m_spRotatingFilesLogger);
}

void CLogger::Log_Out(ELogType tpye, const std::string & message)
{
	OutputConsoleLog(tpye, message);
	OutputRotatingFiles(tpye, message);
}

void CLogger::OutputConsoleLogWithElastic(ELogType tpye, const std::string &message)
{
}
