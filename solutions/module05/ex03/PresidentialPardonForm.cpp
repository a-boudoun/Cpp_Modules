#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src), _target(src._target){
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
	Form::operator=(rhs);
	_target = rhs._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (getSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	std::cout<<_target<<" has been pardoned by Zafod Beeblebrox"<<std::endl;
}


