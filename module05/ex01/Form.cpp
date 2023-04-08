/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:06:57 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/22 16:19:46 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	std::cout << "Form constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(){
	std::cout<<"Form destructor called"<<std::endl;
}

Form &Form::operator=(Form const &rhs){
	_signed = rhs._signed;
	return *this;
}

std::string Form::getName() const{
	return _name;
}

bool Form::getSigned() const{
	return _signed;
}

int Form::getGradeToSign() const{
	return _gradeToSign;
}

int Form::getGradeToExecute() const{
	return _gradeToExecute;
}

std::ostream &operator<<(std::ostream &out, Form const &rhs){
	out << "Form " << rhs.getName() << " is " << (rhs.getSigned() ? "" : "not ") << "signed and requires a grade of " << rhs.getGradeToSign() << " to sign and a grade of " << rhs.getGradeToExecute() << " to execute";
	return out;
}

void Form::beSigned(Bureaucrat const &b){
	if (b.getGrade() >= _gradeToSign)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

