/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:18:36 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/18 18:21:51 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(), _target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), _target(src._target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	AForm::operator=(rhs);
	_target = rhs._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout<<"Drilling "<< _target <<" robot"<<std::endl;
	static int s = 0;
	if (s % 2 == 0)
		std::cout<<_target<<" has been robotomized successfully"<<std::endl;
	else
		std::cout<<"Robotomization of "<<_target<<" failed"<<std::endl;
	s++;

}
