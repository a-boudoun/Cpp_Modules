/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:44:49 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/24 14:43:12 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	STL : Standard Template Library
	set of tools to help you write code that is more efficient, more flexible, and more reliable.

	*Containers
	*Iterators
	*Algorithms
	*Function objects
*/
#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>

template <typename T>
void easyfind(T& container, int a)
{
	typename T::iterator it = find(container.begin(), container.end(), a);
	if (it != container.end())
		std::cout << "Found " << *it << std::endl;
	else
		throw std::out_of_range("Not Found");
}
