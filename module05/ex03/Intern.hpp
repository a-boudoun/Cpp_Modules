/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:02:00 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/19 18:02:01 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
