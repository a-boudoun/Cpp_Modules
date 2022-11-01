#pragma once

#include<iostream>

class Fixed{
	private:
		int fixed_value;
		static const int fraction_bits;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int n);
		Fixed(const float f);
		void operator=(const Fixed& obj);
		void operator << (const Fixed& obj);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};
