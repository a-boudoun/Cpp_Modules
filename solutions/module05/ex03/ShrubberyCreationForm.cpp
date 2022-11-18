/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:19:21 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/18 18:20:55 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), _target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src._target){
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs){
	AForm::operator=(rhs);
	_target = rhs._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
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
