/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:40:03 by aboudoun          #+#    #+#             */
/*   Updated: 2023/09/19 15:32:37 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <list>
#include <ctime>
#include <iomanip>

void parseArguments(char *av, std::vector<int> &_inputVec, std::list<int> &_inputLis);
std::vector<int> sortVector(std::vector<int> &_input);
std::list<int> sortList(std::list<int> &_input);
void beforeAfterVec(std::vector<int> &_inputVec, std::string str);
void beforeAfterLis(std::list<int> &_inputLis, std::string str);
double calculDuration(std::clock_t start, std::clock_t end);
