/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:20:03 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/18 18:20:04 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include"Bureaucrat.hpp"
class Bureaucrat;

class Form{
	private:
		std::string const _name;
		bool _signed;
		int const _gradeToSign;
		int const _gradeToExecute;
	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const &src);
		~Form();
		Form &operator=(Form const &rhs);
		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat const &b);
		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw(){
					return "Grade too high";
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw(){
					return "Grade too low";
				}
		};
};
std::ostream &operator<<(std::ostream &out, Form const &rhs);
