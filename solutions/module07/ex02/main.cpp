/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:57:07 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/22 13:51:16 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"

int main()
{
    Array<int> numbers(5);

	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = i;

    //operator []
    for (unsigned int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << std::endl;
    }

    // operator =
    Array<int> numbers2(90);
    numbers2 = numbers;
    for (unsigned int i = 0; i < numbers2.size(); i++) {
        std::cout << numbers2[i] << std::endl;
    }

    Array<int> numbers3(numbers);
    for (unsigned int i = 0; i < numbers3.size(); i++) {
        std::cout << numbers3[i] << std::endl;
    }

	// operator [] out of range
    try {
        std::cout << numbers2[5] << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

	// other types

	Array<std::string> strings(5);
	strings[0] = "Hello";
	strings[1] = "World";
	strings[2] = "!!!!!";
	strings[3] = "---------";
	strings[4] = "++++++++++";

	for (unsigned int i = 0; i < strings.size(); i++) {
		std::cout << strings[i] << std::endl;
	}

	try
	{
		std::cout << strings[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    // const Array<int> numbers4(5);
    // for(unsigned int i = 0; i < numbers4.size(); i++) {
    //     std::cout << numbers4[i] << std::endl;
    // }

    system ("leaks array");
    return 0;
}
