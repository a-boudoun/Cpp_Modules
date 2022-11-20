/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:33:38 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/20 19:11:00 by aboudoun         ###   ########.fr       */
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

		bool isChar();
		bool isInt();
		bool isFloat();
		bool isDouble();
		bool isNanInf();

		bool validInput();

		void toChar();
		void toInt();
		void toFloat();
		void toDouble();

		void display();
};
