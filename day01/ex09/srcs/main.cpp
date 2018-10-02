#include <Logger.hpp>
#include <iostream>
int main () {
	Logger l("/tmp/log.out");

	l.log(Logger::CONSOLE, "CONSOLE Go in to console !");
	l.log(Logger::CONSOLE, "CONSOLE Go in to console !");
	l.log(Logger::CONSOLE, "CONSOLE There is a bug !");
	l.log(Logger::CONSOLE, "CONSOLE Segv ahah !");
	l.log(Logger::FILE, "FILE first message!");
	l.log(Logger::FILE, "FILE everything fine !");
	l.log(Logger::FILE, "FILE still fine !");
	l.log(Logger::FILE, "FILE something happens wrong here !");
	l.log(Logger::FILE, "FILE Carefull get out  !");
	l.log(Logger::FILE, "FILE PAF !");
	return (0);
}