#ifndef __FIXED_CLASS_HPP
#define __FIXED_CLASS_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed( int const & f );
		Fixed( float const & f );
		Fixed( Fixed const & f);
		~Fixed();

		Fixed&		operator=( Fixed const & f );
		int			getRawBits( void ) const ;
		void		setRawBits( int const raw );

		float		toFloat() const;
		int			toInt() const ;

		Fixed operator+(Fixed const &f1) const;
		Fixed operator/(Fixed const &f1) const;
		Fixed operator*(Fixed const &f1) const;
		Fixed operator-(Fixed const &f1) const;
		Fixed const operator++(int value);
		Fixed operator++();
		Fixed const operator--(int value);
		Fixed operator--();

		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;
		bool operator>(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;

		static Fixed const &max(Fixed const &f1, Fixed const &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static Fixed const &min(Fixed const &f1, Fixed const &f2);
		static Fixed &min(Fixed &f1, Fixed &f2);

private:
		int						_rawBits;
		static int const		_padding;
};

std::ostream & operator<<(std::ostream & os, Fixed const & f);
#endif //__FIXED_CLASS_HPP