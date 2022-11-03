#pragma once

#include <iostream>

class Fixed{
	private:
		int fixed_value;
		static const int fraction_bits;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed& obj);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};
