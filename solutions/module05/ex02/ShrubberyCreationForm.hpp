#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
};
