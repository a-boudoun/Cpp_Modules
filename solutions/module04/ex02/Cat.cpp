#include "Cat.hpp"

Cat::Cat()
{
	std::cout<<"Cat constructor called"<<std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(std::string str)
{
	std::cout<<"Cat constructor called"<<std::endl;
	this->brain = new Brain();
	this->type = str;
}

Cat::Cat(const Cat &src)
{
	std::cout<<"Cat Copy constructor called"<<std::endl;
	this->brain = NULL;
	*this = src;
}

Cat::~Cat(){
	std::cout<<"Cat destructor called"<<std::endl;
	delete this->brain;
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout<<"Cat Copy assignment operator called"<<std::endl;
	delete this->brain;
	this->brain = new Brain(*rhs.brain);
	this->type = rhs.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout<<"the Cat is Meowing"<<std::endl;
}
