#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	public:
		Intern();
		Intern(Intern const &src);
		Intern &operator=(Intern const &rhs);
		~Intern();
		AForm *makeForm(std::string formName, std::string formTarget);
		AForm *makePresidentialPardonForm(std::string formTarget);
		AForm *makeRobotomyRequestForm(std::string formTarget);
		AForm *makeShrubberyCreationForm(std::string formTarget);

};
