#include "Intern.hpp"

Intern::Intern(){
	std::cout<<"Intern created"<<std::endl;
}

Intern::Intern(Intern const &src){
	*this = src;
}

Intern &Intern::operator=(Intern const &rhs){
	(void)rhs;
	return *this;
}

Form* Intern::makeRobotomyRequestForm(std::string target){
	return new RobotomyRequestForm(target);
}

Form* Intern::makePresidentialPardonForm(std::string target){
	return new PresidentialPardonForm(target);
}

Form* Intern::makeShrubberyCreationForm(std::string target){
	return new ShrubberyCreationForm(target);
}

Intern::~Intern(){
	std::cout<<"Intern destroyed"<<std::endl;
}

Form *Intern::makeForm(std::string formName, std::string target){
	Form* (Intern::*fptr[3])(std::string) = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};
	std::string formNames[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	for (int i = 0; i < 3; i++){
		if (formName == formNames[i]){
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*fptr[i])(target);
		}
	}
	std::cout << "Intern can't create " << formName << std::endl;
	return NULL;
}

