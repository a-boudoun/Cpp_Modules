#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout<<"Cat constructor called"<<std::endl;
}

Cat::Cat(std::string str)
{
	std::cout<<"Cat constructor called"<<std::endl;
	this->type = str;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout<<"Cat Copy constructor called"<<std::endl;
}

Cat::~Cat()
{
	std::cout<<"Cat destructor called"<<std::endl;
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout<<"Cat Copy assignment operator called"<<std::endl;
	this->type = rhs.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout<<"the Cat is Meowing"<<std::endl;
}
