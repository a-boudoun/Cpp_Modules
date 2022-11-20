/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:33:38 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/20 18:52:03 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Convert{
	private:
		std::string _input;
		int _i;
		float _f;
		double _d;
		char _c;

	public:
		Convert();
		Convert(std::string input);
		Convert(Convert const & src);
		~Convert();
		Convert & operator=(Convert const & rhs);

		// std::string getInput() const;
		// int getI() const;
		// float getF() const;
		// double getD() const;
		// char getC() const;

		bool isChar();
		bool isInt();
		bool isFloat();
		bool isDouble();
		bool isNanInf();

		bool validInput();

		void toChar() const;
		void toInt() const;
		void toFloat() const;
		void toDouble() const;
};
