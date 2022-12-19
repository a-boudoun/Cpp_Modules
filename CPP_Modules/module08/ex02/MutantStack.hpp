/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:58:06 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/24 19:20:22 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//underlying container

#pragma once

#include <iostream>
#include <stack>
#include <list>
#include <iterator>
#include <algorithm>
#include <deque>
#include <vector>
#include <map>

template <class T, class Container = std::deque<T> >

class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() {}
		MutantStack(MutantStack const &src){
			*this = src;
		}
		~MutantStack(){
			this->c.clear();
		}
		MutantStack &operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				this->c = rhs.c;
			return (*this);
		}
		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		iterator begin() {
			return (this->c.begin());
		}
		iterator end() {
			return (this->c.end());
		}
};
