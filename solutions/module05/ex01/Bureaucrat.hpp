/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:07:29 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/18 18:07:30 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include "Form.hpp"
class Form;

class Bureaucrat{
	private:
		std::string const _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat &operator=(Bureaucrat const &other);
		~Bureaucrat();
		std::string const getName() const;
		void signForm(Form &form);
		int getGrade() const;
		void setGrade(int grade);
		void setName(std::string const name);
		void incrementGrade();
		void decrementGrade();
		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw();
		};
};
std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs);
