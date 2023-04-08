#include"Dog.hpp"

Dog::Dog(){
	std::cout<<"Dog constructor called"<<std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string str){
	this->type = str;
	std::cout<<"Dog constructor called"<<std::endl;
}

Dog::Dog(const Dog &src){
	std::cout<<"Dog Copy constructor called"<<std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog &rhs){
	std::cout<<"Dog Copy assignment operator called"<<std::endl;
	this->type = rhs.type;
	return *this;
}

Dog::~Dog(){
	std::cout<<"Dog destructor called"<<std::endl;
}

void	Dog::makeSound() const{
	std::cout<<"the Dog is Barking"<<std::endl;
}
