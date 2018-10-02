
#include <Logger.hpp>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>

/** Static **/

std::string const & Logger::CONSOLE = "CONSOLE";
std::string const & Logger::FILE = "FILE";
std::string const Logger::ARRAY[] = {
	Logger::CONSOLE,
	Logger::FILE
};

/** Constructor **/

Logger::Logger(std::string const &path) : 
	_path(path)  {
	std::ofstream	ofc(_path, std::ios::app);
	ofc 
		<< 	"=============================================="
		<< std::endl
		<< "\t"
		<< makeLogEntry("BEGIN") 
		<< std::endl
		<<	"=============================================="
		<< std::endl;
	ofc.close();
	ptr[0] = &Logger::logToConsole;
	ptr[1] = &Logger::logToFile;
}

/** Public **/

void Logger::log(std::string const &dest, std::string const &message) {
	for (int index = 0; index < 2; index++) {
		if (dest == ARRAY[index])
			(this->*ptr[index])(message);
	}
}

/** Private **/

std::string  Logger::_displayTimestamp(void) {
	std::time_t				t = std::time(0);
    std::tm*				now = std::localtime(&t);
	std::ostringstream		s_time;

	s_time << "[ ";
	s_time << (!(now->tm_mday / 10) ? "0" : "");
	s_time << (now->tm_mday);
	s_time << "/";
	s_time << (!(now->tm_mon / 10) ? "0" : "");
	s_time << now->tm_mon;
	s_time << " ";
	s_time << (!(now->tm_hour / 10) ? "0" : "");
	s_time << now->tm_hour;
	s_time << ":";
	s_time << (!(now->tm_min / 10) ? "0" : "");
	s_time << now->tm_min;
	s_time << ":";
	s_time << (!(now->tm_sec / 10) ? "0" : "");
	s_time << now->tm_sec;
	s_time << " ] ";
	std::string timestamps(s_time.str());
	return timestamps;
}


void Logger::logToConsole(std::string const  &msg) {
	std::cout << makeLogEntry(msg)  << std::endl;
}
void Logger::logToFile(std::string const &msg) {
	std::ofstream	ofc(_path, std::ios::app);
	ofc << makeLogEntry(msg) << std::endl;
	ofc.close();
}
std::string Logger::makeLogEntry(std::string const & msg) {
	std::string _log;
	_log += _displayTimestamp();
	_log += msg;
	return _log;
}

/** Destructor **/

Logger::~Logger() {
	std::ofstream ofc(_path, std::ios::app);
	ofc
		<< "=============================================="
		<< std::endl
		<< "\t"
		<< makeLogEntry("END")
		<< std::endl
		<< "=============================================="
		<< std::endl;
	ofc.close();
}