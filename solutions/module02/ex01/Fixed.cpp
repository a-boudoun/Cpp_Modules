#include"Fixed.hpp"

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

void Fixed::operator = (const Fixed &obj){
	fixed_value = obj.fixed_value;
	std::cout << "Copy assignment operator called" << std::endl;
}
//................................................................................................

