#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src), _target(src._target){
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs){
	Form::operator=(rhs);
	_target = rhs._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (getSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	std::ofstream ofs(_target + "_shrubbery");
