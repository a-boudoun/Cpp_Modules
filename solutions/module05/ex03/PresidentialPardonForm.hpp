#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const;
};
