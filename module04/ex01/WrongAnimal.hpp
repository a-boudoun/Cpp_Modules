#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string str);
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal& operator=(const WrongAnimal &rhs);
		~WrongAnimal();
		void	makeSound() const;
		void	setType(std::string str);
		std::string	getType() const;
};
