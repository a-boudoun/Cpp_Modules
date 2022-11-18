#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form{
	private:
		std::string _target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
};
