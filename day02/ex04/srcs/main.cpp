#include <Fixed.hpp>
#include <cstdlib>
#include <sstream>
#include <eval_expr.h>

/** Error **/

void error(std::string errorMessage) {
	std::cerr << "Error : " << errorMessage << std::endl;
	exit(1);
}

/** Logger **/

void log(int level, std::string msg, char c) {
	for (int index = -2; index < level; index++) {
		std::cout << "\t";
	}
	std::cout
		<< "Lvl  "
		<< level
		<< "  On character ["
		<< c
		<< "] "
		<< msg
		<< std::endl;
}

void	op(Fixed const &f1, Fixed const &f2, std::string op, int level) {
	for (int index = -3; index < level; index++) {
		std::cout << "\t";
	}
	std::cout
		<< "Operation [ "
		<< f1
		<< " "
		<< op
		<< " "
		<< f2
		<< " ]"
		<< std::endl;
}

/** Detect Character **/

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

/** Increment Argument **/

void		incrementArgument(std::string &arg) {
	arg = arg.substr(1, arg.size());
}

/** Function arithmetic **/

Fixed			sum(Fixed & f1, Fixed & f2, int level) { op(f1,f2,"+", level); return f1 + f2; }
Fixed			minus(Fixed & f1, Fixed & f2, int level) {  op(f1,f2,"-", level); return f1 - f2; }
Fixed			div(Fixed & f1, Fixed & f2, int level) {  op(f1,f2,"/", level); return f1 / f2; }
Fixed			times(Fixed & f1, Fixed & f2, int level) {  op(f1,f2,"*", level); return f1 * f2; }

/** Getter next float && operation in stream **/

float			nextFloat(std::stringstream &nu) {
	float f1;
	nu >> f1;
	nu >> std::ws;
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
	op >> std::ws;
	return nullptr;
}

/** Evaluate string stream **/

Fixed			makeArgument(std::stringstream & nu, std::stringstream & op, int level) {
	Fixed		f1(nextFloat(nu));
	operator_f	fct;
	while (!nu.eof() || !op.eof()) {
		Fixed		f2(nextFloat(nu));
		fct = nextOperation(op);
		if (fct == nullptr) {
			if (!nu.eof())
			std::cout << "saout" << std::endl;
			return f1;
		}
		f1 = (fct)(f1, f2, level);
	}
	return (f1);
}

/** Parse input string **/

Fixed			evalExpression(std::string &arg, int level) {
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
			if (level > 0)
				return makeArgument(nu, op, level);
			else
				error("Missing '('.");
		} else {
			error("Invalid charactere detected.");
		}
		incrementArgument(arg);
	}
	if (level == 0)
		return (makeArgument(nu, op, level));
	else {
		error("Missing ')'.");
		return (f);
	}

}

/** Main **/

int			main(int argc, char **argv)
{
	if (argc == 2) {
		std::string arg = argv[1];
		std::cout << "\t/\\ *[ EVAL EXPRESSION BEGIN ]* /\\ " << std::endl << std::endl;
		Fixed r = evalExpression(arg, 0);
		std::cout << std::endl
			<< "Result *["
			<< r
			<< "]*"
			<< std::endl;
	} else {
		std::cout << "Need one argument as expression (42 * 1)" << std::endl;
	}
	return 0;
}