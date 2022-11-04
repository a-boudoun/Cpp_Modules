#include "Fixed.hpp"

const int Fixed::fraction_bits = 8;

Fixed::Fixed()
	: fixed_value(0) {
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj){
	std::cout << "Copy constructor called" << std::endl;
	fixed_value = obj.getRawBits();
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
	this->fixed_value = rhs.getRawBits();
	return *this;
}
/********************************************************************************/

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this -> fixed_value = n << fraction_bits;
}

Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    this -> fixed_value = (int)(f * (1 << fraction_bits));
}

int Fixed::toInt(void) const {
	return (this->fixed_value >> fraction_bits);
}

float Fixed::toFloat(void) const {
	return ((float)this->fixed_value / (1 << fraction_bits));
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
