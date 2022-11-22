/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:20:00 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/18 18:20:01 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat n("Noh", 1);
		Form f("Form1", 5, 1);
		n.signForm(f);
		std::cout << f << std::endl;
		Bureaucrat b("Bob", 10);
    	std::cout << "======== b ========" << std::endl;
    	std::cout << b<<std::endl;
    	Form canSign("canSign", 12, 12);
    	std::cout << "======== canSign ========" << std::endl;
    	std::cout << canSign<<std::endl;
    	Form cannotSign("cannotSign", 5, 7);
    	std::cout << "======== cannotSign ========" << std::endl;
    	std::cout << cannotSign<<std::endl;
    	b.signForm(canSign);
    	b.signForm(cannotSign);
		}
		catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
