/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:57:06 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/22 16:21:01 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
/*                   Constructors                               */

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

/*                     Destructor                               */
Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

/*                   Operators                                 */
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other) {
	std::cout << "Bureaucrat assignation operator called" << std::endl;
	_grade = other._grade;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs) {
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return out;
}

/*                   Increment/Decrement                                 */
void Bureaucrat::incrementGrade() {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

/*                   Exceptions                                */
const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

/*                   Getters                                   */
std::string const Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

/*                   Setters                                   */
void Bureaucrat::setGrade(int grade) {
	_grade = grade;
}

void Bureaucrat::signForm(AForm &form){
	try{
		form.beSigned(*this);
	}catch(std::exception &e){
		std::cout << _name << " cannot sign " << form.getName() << " because "<< e.what() << std::endl;
		return;
	}
	std::cout<< _name << " signed " << form.getName() << std::endl;
}

/* .....................executeForm.............................. */

void Bureaucrat::executeForm(AForm const & form){
	try{
		form.execute(*this);
	}catch(std::exception &e){
		std::cout << _name << " cannot execute " << form.getName() << " because "<< e.what() << std::endl;
		return;
	}
	std::cout<< _name << " executed " << form.getName() << std::endl;
}
