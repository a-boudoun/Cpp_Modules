/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 23:34:14 by aboudoun          #+#    #+#             */
/*   Updated: 2023/09/20 19:16:37 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stack>
#include<exception>
#include<sstream>

class RPN
{
	private:
		std::stack<int> _stack;
		std::string _str;
		std::string _oper;
		double _first;
		double _second;
		double _result;
	public:
		RPN();
		RPN(std::string const &str);
		RPN(RPN const &rhs);
		RPN &operator=(RPN const &rhs);
		~RPN();

		void	parsLine();
		void	calculResult();
		bool	checkDigit(const std::string&	str);
};