#include"Animal.hpp"

Animal::Animal()
	: type("Animal"){
	std::cout<<"Animal constructor called"<<std::endl;
}

Animal::Animal(std::string str)
	: type(str){
	std::cout<<"Animal constructor called"<<std::endl;
}

Animal::Animal(const Animal &src){
	std::cout<<"Animal Copy constructor called"<<std::endl;
	*this = src;
}

Animal& Animal::operator=(const Animal &rhs){
	std::cout<<"Animal Copy assignment operator called"<<std::endl;
	this->type = rhs.type;
	return *this;
}

Animal::~Animal(){
	std::cout<<"Animal destructor called"<<std::endl;
}

void	Animal::makeSound() const{
	std::cout<<"an Animal making sound"<<std::endl;
}

std::string	Animal::getType() const{
	return this->type;
}

void Animal::setType(std::string str){
	this->type = str;
}

