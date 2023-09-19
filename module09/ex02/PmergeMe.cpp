/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:40:31 by aboudoun          #+#    #+#             */
/*   Updated: 2023/09/19 15:49:30 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void parseArguments(char *av, std::vector<int> &_inputVec, std::list<int> &_inputLis)
{
	std::stringstream ss(av);
	int tmp;

	while (!ss.eof()){
		ss >> tmp;
		if (ss.fail() || tmp < 0)
			throw std::invalid_argument("Error: invalid argument");
		_inputVec.push_back(tmp);
		_inputLis.push_back(tmp);
	}
}

static void	binarySearchIsertVec(int number, std::vector<int>& _vec)
{
	std::vector<int>::iterator it = std::lower_bound(_vec.begin(), _vec.end(), number);
	_vec.insert(it, number);
}

static void	binarySearchInsertLis(int number, std::list<int>& _list)
{
	std::list<int>::iterator it = std::lower_bound(_list.begin(), _list.end(), number);
	_list.insert(it, number);
}


std::vector<int> sortVector(std::vector<int> &_input)
{
	std::vector<int> _vec;
	std::vector<int> _small;
	std::vector<int> _big;
	int tmp = -1;

	if (_input.size() <= 1)
		return _input;
		
	if (_input.size() % 2 != 0){
		tmp = _input.back();
		_input.pop_back();
	}
	
	for (size_t i = 0; i < _input.size(); i += 2)
	{
		if (_input[i] > _input[i + 1])
		{
			_small.push_back(_input[i + 1]);
			_big.push_back(_input[i]);
		}
		else 
		{
			_small.push_back(_input[i]);
			_big.push_back(_input[i + 1]);
		}
	}
	
	_vec = sortVector(_big);
	
	if (tmp != -1)
		binarySearchIsertVec(tmp, _vec);
		
	for (std::vector<int>::iterator it = _small.begin(); it != _small.end(); it++)
	{
		binarySearchIsertVec(*it, _vec);
	}
	return _vec;
}

std::list<int>	sortList(std::list<int> &_input)
{
	std::list <int> _list;
	std::list <int> _small;
	std::list <int> _big;
	int tmp = -1;

	if (_input.size() <= 1)
		return _input;
		
	if (_input.size() % 2 != 0){
		tmp = _input.back();
		_input.pop_back();
	}

	
	while (!_input.empty())
	{
		if (_input.front() > _input.back())
		{
			_small.push_back(_input.back());
			_big.push_back(_input.front());
		}
		else 
		{
			_small.push_back(_input.front());
			_big.push_back(_input.back());
		}
		_input.pop_front();
		_input.pop_back();
	}

	_list = sortList(_big);
	
	if (tmp != -1)
		binarySearchInsertLis(tmp, _list);
	
	for (std::list<int>::iterator it = _small.begin(); it != _small.end(); it++)
	{
		binarySearchInsertLis(*it, _list);
	}
	
	return _list;
}


void	beforeAfterVec(std::vector<int> &_inputVec, std::string str)
{
	std::cout << str << ": ";
	for (std::vector<int>::iterator it = _inputVec.begin(); it != _inputVec.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	beforeAfterLis(std::list<int> &_inputLis, std::string str)
{
	std::cout << str << ": ";
	for (std::list<int>::iterator it = _inputLis.begin(); it != _inputLis.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

double	calculDuration(std::clock_t start, std::clock_t end)
{
	return ((double)(end - start) / CLOCKS_PER_SEC / 1000);
}