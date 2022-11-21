/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:58:36 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/21 13:58:37 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
