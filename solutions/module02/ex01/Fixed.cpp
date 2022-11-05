/*
Half Precision (16 bit): 1 sign bit, 5 bit exponent, and 10 bit mantissa
Single Precision (32 bit): 1 sign bit, 8 bit exponent, and 23 bit mantissa
Double Precision (64 bit): 1 sign bit, 11 bit exponent, and 52 bit mantissa
Quadruple Precision (128 bit): 1 sign bit, 15 bit exponent, and 112 bit mantissa
//////////////////////////////////////////////////////////////////////////////////////////////////////////
All the exponent bits 0 with all mantissa bits 0 represents 0. If sign bit is 0, then +0, else -0.
All the exponent bits 1 with all mantissa bits 0 represents infinity. If sign bit is 0, then +∞, else -∞.
All the exponent bits 0 and mantissa bits non-zero represents denormalized number.
All the exponent bits 1 and mantissa bits non-zero represents error.
*/

#include "Fixed.hpp"

const int Fixed::fraction_bits = 8;

Fixed::Fixed()
	: fixed_value(0) {
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
    : fixed_value(obj.fixed_value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this -> fixed_value);
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this -> fixed_value = raw;
}

Fixed &Fixed::operator = (const Fixed &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_value = rhs.fixed_value;
	return *this;
}
/********************************************************************************/

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this -> fixed_value = n << fraction_bits;
}

Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    this -> fixed_value = (int) roundf(f * (1 << fraction_bits));
}

int Fixed::toInt() const {
    return (int) fixed_value >> fraction_bits;
}

float Fixed::toFloat() const {
    return (float) fixed_value / (1 << fraction_bits);
}

std::ostream &operator << (std::ostream &out, Fixed const &rhs){
	out << rhs.toFloat();
    return out;
}
