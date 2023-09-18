/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:40:03 by aboudoun          #+#    #+#             */
/*   Updated: 2023/09/18 14:48:23 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <unordered_map>

void parseArguments(char *av, std::vector<int> &_vec);
void sortUnorderedMap(std::vector<int> &_vec);