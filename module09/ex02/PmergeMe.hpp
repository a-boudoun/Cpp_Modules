/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:40:03 by aboudoun          #+#    #+#             */
/*   Updated: 2023/04/11 02:44:35 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class PmergeMe
{
	private:
		std::
	public:
		PmergeMe();
		PmergeMe(std::string const &str);
		PmergeMe(PmergeMe const &rhs);
		PmergeMe &operator=(PmergeMe const &rhs);
		~PmergeMe();
};