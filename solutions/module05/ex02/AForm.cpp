/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:41:42 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/19 17:51:46 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout<<"Default constructor called"<<std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	std::cout<<"AForm constructor called"<<std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
	std::cout<<"AForm copy constructor called"<<std::endl;
}

AForm::~AForm(){
	std::cout<<"AForm destructor called"<<std::endl;
}

AForm &AForm::operator=(AForm const &rhs){
	std::cout<<"AForm assignation operator called"<<std::endl;
	_signed = rhs._signed;
	return *this;
}

std::string AForm::getName() const{
	return _name;
}

bool AForm::getSigned() const{
	return _signed;
}

int AForm::getGradeToSign() const{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const{
	return _gradeToExecute;
}

std::ostream &operator<<(std::ostream &out, AForm const &rhs){
	out << "Form " << rhs.getName() << " is " << (rhs.getSigned() ? "" : "not ") << "signed and requires a grade of " << rhs.getGradeToSign() << " to sign and a grade of " << rhs.getGradeToExecute() << " to execute";
	return out;
}

void AForm::beSigned(Bureaucrat const &b){
	if (b.getGrade() >= _gradeToSign)
		throw AForm::GradeTooLowException();
	else
		_signed = true;
}

