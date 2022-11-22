/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:17:16 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/05 18:17:17 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		//comparison operators
		bool operator>(const Fixed& obj) const;
		bool operator<(const Fixed& obj) const;
		bool operator>=(const Fixed& obj) const;
		bool operator<=(const Fixed& obj) const;
		bool operator==(const Fixed& obj) const;
		bool operator!=(const Fixed& obj) const;
		//arithmetic operators
		Fixed operator+(const Fixed& obj) const;
		Fixed operator-(const Fixed& obj) const;
		Fixed operator*(const Fixed& obj) const;
		Fixed operator/(const Fixed& obj) const;
		//increment operators
		Fixed &operator++ (); //pre
		Fixed operator++ (int); //post
		Fixed &operator-- (); //pre
		Fixed operator-- (int); //post
		//min max
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

};
std::ostream &operator << (std::ostream &out, Fixed const &rhs);
