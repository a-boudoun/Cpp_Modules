#include "Intern.hpp"

Intern::Intern(){
	this -> _form[0] = NULL;
	this -> _form[1] = NULL;
	this -> _form[2] = NULL;
}

Intern::Intern(Intern const &src){
	*this = src;
}

Intern &Intern::operator=(Intern const &rhs){
	(void)rhs;
	return *this;
}

Intern::~Intern(){
	std::cout<<"Intern destroyed"<<std::endl;
	delete this -> _form[0];
	delete this -> _form[1];
	delete this -> _form[2];
}

Form *Intern::makeForm(std::string formName, std::string target){
	this -> _form[0] = new PresidentialPardonForm(target);
	this -> _form[1] = new RobotomyRequestForm(target);
	this -> _form[2] = new ShrubberyCreationForm(target);
	std::string formNames[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	for (int i = 0; i < 3; i++){
		if (formName == formNames[i]){
			std::cout << "Intern creates " << formName << std::endl;
			return this -> _form[i];
		}
	}
	std::cout << "Intern can't create " << formName << std::endl;
	return NULL;
}

