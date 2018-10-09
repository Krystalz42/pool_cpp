//
// Created by Alexandre ROULIN on 09/10/2018.
//

#ifndef EX00_SCALARCONVERSION_HPP
#define EX00_SCALARCONVERSION_HPP

#include <string>
#include <sstream>

class ScalarConversion {
private:
	ScalarConversion();

	double			_d;
	std::string		_s;

public:
	ScalarConversion(std::string input);

	~ScalarConversion();

	ScalarConversion &operator=(ScalarConversion const &sc);

	ScalarConversion(ScalarConversion const &sc);



	char	convertToChar();
	int	convertToInt();
	float	convertToFLoat();
	double	convertToDouble();
	void	checkConvertToChar();
	void	checkConvertToInt();
	void	checkConvertToFloat();
	void	checkConvertToDouble();
	int	getPrecision();

	class ConversionError : public std::exception {
	private:
		ConversionError() throw();
		std::string _what;
	public:
		ConversionError(std::string what) throw();

		~ConversionError() throw();

		ConversionError(ConversionError const &ce) throw();

		virtual const char *what() const throw();

		ConversionError &operator=(ConversionError const &e) throw();
	};
};

#endif //EX00_SCALARCONVERSION_HPP
