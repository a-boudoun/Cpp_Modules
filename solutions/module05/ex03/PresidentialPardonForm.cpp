/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:17:10 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/18 18:21:37 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(), _target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src), _target(src._target){
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
	AForm::operator=(rhs);
	_target = rhs._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout<<_target<<" has been pardoned by Zafod Beeblebrox"<<std::endl;
}


