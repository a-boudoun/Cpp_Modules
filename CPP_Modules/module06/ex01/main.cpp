/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:58:36 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/21 15:06:30 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
class B;
class D : public B;
B* pb; => what (D*)pb?

with reinterpret_cast:
Return a pointer to the same byte of memory, but just change the type of the pointer.
(This is the same as what all pointer casts do in C, as explained above.)
*/

#include"serialization.h"

int main()
{
	Data _data = {-122};
	Data *ptr;

	ptr = deserialize(serialize(&_data));
	std::cout << ptr << std::endl;
	std::cout << &_data << std::endl;

	std::cout << ptr->n << std::endl;
	std::cout << _data.n << std::endl;
	return (0);
}
