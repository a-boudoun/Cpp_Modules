/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:50:49 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/22 13:47:00 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<exception>

template <typename T> class Array{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array()
		{
			std::cout<<"Default constructor called"<<std::endl;
			this->_array = new T[0];
			this->_size = 0;
		}
		Array(unsigned int n)
		{
			std::cout<<"constructor called"<<std::endl;
			this->_array = new T[n];
			this->_size = n;
		}
		Array(Array const &src)
		{
			std::cout<<"Copy constructor called"<<std::endl;
			this->_array = NULL;
			*this = src;
		}
		~Array()
		{
			std::cout<<"Destructor called"<<std::endl;
			delete [] _array;
		}
		Array& operator=(Array const &rhs)
		{
			std::cout<<"Assignation operator called"<<std::endl;
			if (this != &rhs)
			{
				delete [] _array;
				_array = new T[rhs._size];
				_size = rhs._size;
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return (*this);
		}

		T& operator[](int i)
		{
			if (i >= (int)_size || i < 0)
				throw OutOfBounds();
			return (_array[i]);
		}
		const T& operator[](int i) const
		{
			if (i >= (int)_size || i < 0)
				throw OutOfBounds();
			return (_array[i]);
		}

		unsigned int size() const
		{
			return (_size);
		}

		class OutOfBounds : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Out of bounds");
				}
		};
};
