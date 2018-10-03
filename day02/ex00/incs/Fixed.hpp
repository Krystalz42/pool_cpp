#ifndef __FIXED_CLASS_HPP
#define __FIXED_CLASS_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed( int const & f );
		Fixed( Fixed const & f);
		~Fixed();

		Fixed	&	operator=(Fixed const & f);
		Fixed		operator+(Fixed const & f);

		int getRawBits( void ) const ;
		void setRawBits( int const raw );
	private:
		int						_raw;
		static int const		_nu;
};

std::ostream & operator<<(std::ostream & os, Fixed & f);

#endif //__FIXED_CLASS_HPP