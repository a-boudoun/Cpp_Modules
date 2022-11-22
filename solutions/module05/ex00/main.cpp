/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:07:41 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/19 17:43:25 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try{
	Bureaucrat b("Bob", 150);
	std::cout << b.getName() << " " << b.getGrade() << std::endl;
	b.incrementGrade();
	std::cout << b << std::endl;
	b.decrementGrade();
	std::cout << b.getName() << " " << b.getGrade() << std::endl;
	b.decrementGrade();
	std::cout << b << std::endl;
	Bureaucrat c("Mike", 7);
	std::cout << c.getName() << " " << c.getGrade() << std::endl;
	Bureaucrat d(c);
	std::cout << d.getName() << " " << d.getGrade() << std::endl;
	d = b;
	std::cout << d.getName() << " " << d.getGrade() << std::endl;
	std::cout<< b << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
