#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src), _target(src._target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	Form::operator=(rhs);
	_target = rhs._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (getSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	std::cout<<"Drilling "<< _target <<" robot"<<std::endl;
	static int s = 0;
	if (s % 2 == 0)
		std::cout<<_target<<" has been robotomized successfully"<<std::endl;
	else
		std::cout<<"Robotomization of "<<_target<<" failed"<<std::endl;
	s++;

}
