#include <Fixed.hpp>
#include <cstdlib>
#include <sstream>
#include <eval_expr.h>
void log(int level, std::string msg, char c) {
	for (int index = -1; index < level; index++) {
		std::cout << "\t";
	}
	std::cout
		<< " "
		<< level
		<< "  On character ["
		<< c
		<< "] "
		<< msg
		<< std::endl;
}

bool		isClosingParanthesis(char p) {
	return (p == ')');
}

bool		isOpeningParanthesis(char p) {
	return (p == '(');
}

bool		isOperator(char op) {
	return (op == '+' || op == '-' || op == '*' || op == '/');
}

bool		isNumber(char nu) {
	return ((nu >= '0' && nu <= '9') || nu == '.');
}

bool		isWhiteSpace(char w) {
	return (w == ' ' || w == '	');
}

void		incrementArgument(std::string &arg) {
	arg = arg.substr(1, arg.size());
}

Fixed			sum(Fixed & f1, Fixed & f2) { return f1 + f2; }
Fixed			minus(Fixed & f1, Fixed & f2) { return f1 - f2; }
Fixed			div(Fixed & f1, Fixed & f2) { return f1 / f2; }
Fixed			times(Fixed & f1, Fixed & f2) { return f1 * f2; }

float			nextFloat(std::stringstream &nu) {
	float f1;
	nu >> std::ws;
	nu >> f1;
	return f1;
}

operator_f		nextOperation(std::stringstream &op) {
	static operator_action const oa[] = {
		{'+', &sum},
		{'-', &minus},
		{'*', &times},
		{'/', &div}
	};
	char		c;

	op >> c;
	for (int index = 0; index < 4; index++) {
		if (oa[index].op == c)
			return oa[index].f;
	}
	return nullptr;
}

Fixed			makeArgument(std::stringstream & nu, std::stringstream & op) {
	Fixed		f1(nextFloat(nu));

	while (!nu.eof()) {
		Fixed		f2(nextFloat(nu));
		f1 = (*nextOperation(op))(f1, f2);
	}
	return (f1);
}

Fixed			evalExpression(std::string &arg, int level) {
	char					current_op;
	std::stringstream		nu;
	std::stringstream		op;
	Fixed					f(0);



	while (arg.size() != 0) {
		if (isOpeningParanthesis(arg[0])) {
															log(level, "isOpeningParanthesis", arg[0]);
			incrementArgument(arg);
			nu << evalExpression(arg, level + 1);
		}
		else if (isWhiteSpace(arg[0])) {
															log(level, "isWhiteSpace", arg[0]);	
			nu << arg[0];
		} else if (isNumber(arg[0])) {
															log(level, "isNumber", arg[0]);
			nu << arg[0];
		} else if (isOperator(arg[0])) {
															log(level, "isOperator", arg[0]);
			nu << ' ';
			op << arg[0] << ' ';
		} else if (isClosingParanthesis(arg[0])) {
															log(level, "isClosingParanthesis", arg[0]);
			return makeArgument(nu, op);
		} else {
															log(level, "whoAreYou", arg[0]);
		}
		incrementArgument(arg);
	}
	return (makeArgument(nu, op));
}

int			main(int argc, char **argv)
{
	if (argc == 2) {
		std::string arg = argv[1];
		std::cout << evalExpression(arg, 0) << std::endl;
	} else {
		std::cout << "Need arg !" << std::endl;
	}
	return 0;
}