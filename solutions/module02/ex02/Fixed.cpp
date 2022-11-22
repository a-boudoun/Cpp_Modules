/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:17:26 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/05 22:05:26 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fraction_bits = 8;

Fixed::Fixed()
	: fixed_value(0) {
		// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
    : fixed_value(obj.fixed_value) {
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return (this -> fixed_value);
}

void Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    this -> fixed_value = raw;
}

Fixed &Fixed::operator = (const Fixed &rhs){
	// std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_value = rhs.fixed_value;
	return *this;
}

/*--------------------------------EX01--------------------------------------*/

Fixed::Fixed(const int n) {
    // std::cout << "Int constructor called" << std::endl;
    this -> fixed_value = n << fraction_bits;
}

Fixed::Fixed(const float f) {
    // std::cout << "Float constructor called" << std::endl;
    this -> fixed_value = roundf(f * (1 << fraction_bits));
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
/*---------------------------------EX02----------------------------------------*/
        //comparison operators
bool Fixed::operator>(const Fixed& obj) const{
    return this->fixed_value > obj.fixed_value;
}

bool Fixed::operator<(const Fixed& obj) const{
    return this->fixed_value < obj.fixed_value;
}

bool Fixed::operator>=(const Fixed& obj) const{
    return this->fixed_value >= obj.fixed_value;
}

bool Fixed::operator<=(const Fixed& obj) const{
    return this->fixed_value <= obj.fixed_value;
}

bool Fixed::operator==(const Fixed& obj) const{
    return this->fixed_value == obj.fixed_value;
}

bool Fixed::operator!=(const Fixed& obj) const{
    return this->fixed_value != obj.fixed_value;
}

        //arithmetic operators
Fixed Fixed::operator+(const Fixed& obj) const{
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(const Fixed& obj) const{
    return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(const Fixed& obj) const{
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed& obj) const{
    return Fixed(this->toFloat() / obj.toFloat());
}

        //increment operators
Fixed& Fixed::operator++(){
    this->fixed_value++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed tmp(*this);
    this->fixed_value++;
    return tmp;
}

Fixed& Fixed::operator--(){
    this->fixed_value--;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed tmp(*this);
    this->fixed_value--;
    return tmp;
}

        //min and max
Fixed& Fixed::min(Fixed& a, Fixed& b){
    return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
    return a > b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    return a < b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    return a > b ? a : b;
}

