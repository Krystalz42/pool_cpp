#ifndef __LOGGER_HPP__
#define __LOGGER_HPP__

#include <fstream>

class Logger {
	private:
		std::string		_path;
		void logToConsole(std::string const &log);
		void logToFile(std::string const &msg);
		std::string makeLogEntry(std::string const & log);
		std::string _displayTimestamp(void);
		static std::string const ARRAY[];
		void (Logger::*ptr[])(std::string const &);
	public:
		static std::string const & CONSOLE;
		static std::string const & FILE;
	
		Logger(std::string const & path);
		void log(std::string const & dest, std::string const & message);
		~Logger();
};

#endif //__LOGGER_HPP__