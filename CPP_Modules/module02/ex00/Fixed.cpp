/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:17:53 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/05 18:17:54 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
