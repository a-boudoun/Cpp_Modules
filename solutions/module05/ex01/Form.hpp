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
