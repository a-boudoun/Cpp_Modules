/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:33:38 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/21 10:07:14 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

enum eType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
};

class Convert{
	private:
		std::string _input;
		int _i;
		float _f;
		double _d;
		char _c;
		eType _type;

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
		void cast();
		void display();
};
