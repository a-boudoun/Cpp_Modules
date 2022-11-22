#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string str);
		Cat(const Cat &src);
		Cat& operator=(const Cat &rhs);
		~Cat();
		void	makeSound() const;
	private:
		Brain *brain;
};
