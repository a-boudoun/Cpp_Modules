/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:58:27 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/21 15:16:37 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
class B;
class D : public B;
B* pb; => what (D*)pb?

with dynamic_cast:
Check whether the B* really points to a B that is part of a D object.
Ifso, return a pointer to the D object. If not, fail (maybe by returning
a null pointer or throwing an exception.)
*/

#include"Identify.hpp"

int main()
{
	Identify *p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}
