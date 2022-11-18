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

	private:
		Form *_form[3];
};
