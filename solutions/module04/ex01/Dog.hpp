#pragma once

#include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(std::string str);
		~Dog();
		Dog(const Dog &src);
		Dog& operator=(const Dog &rhs);
		void	makeSound() const;
	private:
		Brain *brain;
};
