#pragma once
#include <string>

/*! The max length of OS directory path */
#define	URANUS_MAX_PATH_LEN	384

// Compile time log levels
#define SPDLOG_TRACE_ON
#define SPDLOG_DEBUG_ON

const static std::string PRODUCT_NAME = "BackupManager";
const static std::string LOG_FOLDER_PATH = "logs";
const static std::string LOG_ROTATING_FILE = "rotating.txt";
const static unsigned int ROTATING_FILE_NUMBER = 3;
const static unsigned int ROTATING_FILE_SIZE = 1048576 * 5;

/*! Tpyes of Speed Logger */
enum class ELogType
{
	Trace = 0,
	Debug = 1,
	Info = 2,
	Warn = 3,
	Err = 4,
	Critical = 5,
	Off = 6
};