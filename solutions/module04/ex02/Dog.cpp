#include"Dog.hpp"

Dog::Dog(){
	std::cout<<"Dog constructor called"<<std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(std::string str){
	this->type = str;
	this->brain = new Brain();
	std::cout<<"Dog constructor called"<<std::endl;
}

Dog::Dog(const Dog &src){
	std::cout<<"Dog Copy constructor called"<<std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog &rhs){
	std::cout<<"Dog Copy assignment operator called"<<std::endl;
	delete this->brain;
	this->brain = new Brain(*rhs.brain);
	this->type = rhs.type;
	return *this;
}

Dog::~Dog(){
	std::cout<<"Dog destructor called"<<std::endl;
	delete this->brain;
}

void	Dog::makeSound() const{
	std::cout<<"the Dog is Barking"<<std::endl;
}
