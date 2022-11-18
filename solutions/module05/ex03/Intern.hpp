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
		Form *makeForm(std::string formName, std::string formTarget);
		Form *makePresidentialPardonForm(std::string formTarget);
		Form *makeRobotomyRequestForm(std::string formTarget);
		Form *makeShrubberyCreationForm(std::string formTarget);

};
