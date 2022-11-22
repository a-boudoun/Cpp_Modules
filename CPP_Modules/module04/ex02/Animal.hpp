#pragma once

#include<iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(std::string str);
		Animal(const Animal &src);
		Animal& operator=(const Animal &rhs);
		virtual void	makeSound() const = 0;
		void	setType(std::string str);
		std::string	getType() const;
};
