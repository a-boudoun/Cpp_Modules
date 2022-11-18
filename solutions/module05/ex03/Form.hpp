#pragma once

#include <iostream>
#include<fstream>
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
		virtual ~Form();
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
		class FormNotSignedException : public std::exception{
			public:
				virtual const char *what() const throw(){
					return "Form not signed";
				}
		};
		class FileOpenException : public std::exception{
			public:
				virtual const char *what() const throw(){
					return "File open error";
				}
		};
		virtual void	execute(Bureaucrat const & executor) const = 0;
};
std::ostream &operator<<(std::ostream &out, Form const &rhs);
