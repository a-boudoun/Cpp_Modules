#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
}

Form::~Form(){
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

