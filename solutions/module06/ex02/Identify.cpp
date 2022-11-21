/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:58:22 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/21 13:58:23 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Identify.hpp"

Identify::~Identify()
{
	std::cout << "Identify destructor called" << std::endl;
}

Identify *generate(void)
{
	int i;
	Identify* p;
	srand(time(0));

	i = rand() % 3;
	if (i == 0)
		p = new A();
	else if (i == 1)
		p = new B();
	else
		p = new C();
	return (p);
}

void identify(Identify *p)
{
	std::cout<<"type of the Identify object is: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Identify &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "type of the Identify object is: A"<<std::endl;
	}
	catch (const std::exception &e)
	{
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "type of the Identify object is: B"<<std::endl;
	}
	catch (const std::exception &e)
	{
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "type of the Identify object is: C"<<std::endl;
	}
	catch (const std::exception &e)
	{
	}
}

