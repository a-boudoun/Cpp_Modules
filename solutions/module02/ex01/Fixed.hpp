#pragma once

#include<iostream>
#include<cmath>

class Fixed{
	private:
		int fixed_value;
		static const int fraction_bits;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int n);
		Fixed(const float f);
		Fixed &operator=(const Fixed& obj);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};
std::ostream &operator << (std::ostream &out, Fixed const &rhs);
