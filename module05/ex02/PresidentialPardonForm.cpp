/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:17:10 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/19 17:52:54 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default")
{
	std::cout<<"Default constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){
	std::cout<<"PresidentialPardonForm constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src), _target(src._target){
	std::cout<<"PresidentialPardonForm copy constructor called"<<std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
	std::cout<<"PresidentialPardonForm assignation operator called"<<std::endl;
	AForm::operator=(rhs);
	_target = rhs._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout<<"PresidentialPardonForm destructor called"<<std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout<<_target<<" has been pardoned by Zafod Beeblebrox"<<std::endl;
}


