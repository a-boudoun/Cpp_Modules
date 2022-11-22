/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:19:21 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/19 17:54:47 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout<<"ShrubberyCreationForm Default Constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){
	std::cout<<"ShrubberyCreationForm Constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src._target){
	std::cout<<"ShrubberyCreationForm Copy Constructor called"<<std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs){
	std::cout<<"ShrubberyCreationForm Assignation Operator called"<<std::endl;
	AForm::operator=(rhs);
	_target = rhs._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout<<"ShrubberyCreationForm Destructor called"<<std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::ofstream ofs(_target + "_shrubbery");
	if (ofs.is_open() == false)
		throw AForm::FileOpenException();
	std::cout<<"Creating "<< _target <<" tree"<<std::endl;
	ofs<<"          _-_ 	     "<<std::endl;
	ofs<<"       /~~   ~~\\       "<<std::endl;
	ofs<<"    /~~         ~~\\    "<<std::endl;
	ofs<<"   {               }   "<<std::endl;
	ofs<<"    \\  _-     -_  /    "<<std::endl;
	ofs<<"      ~  \\ //  ~      "<<std::endl;
	ofs<<"   _- -   | | _- _     "<<std::endl;
	ofs<<"     _ -  | |   -_     "<<std::endl;
	ofs<<"         // \\ 	     "<<std::endl;

}
