#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout<<"WrongAnimal constructor called"<<std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string str){
	this->type = str;
	std::cout<<"WrongAnimal constructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
	std::cout<<"WrongAnimal Copy constructor called"<<std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(){
	std::cout<<"WrongAnimal destructor called"<<std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs){
	std::cout<<"WrongAnimal Copy assignment operator called"<<std::endl;
	this->type = rhs.type;
	return *this;
}

void	WrongAnimal::makeSound() const{
	std::cout<<"a WrongAnimal is making sound"<<std::endl;
}

std::string	WrongAnimal::getType() const{
	return this->type;
}

void WrongAnimal::setType(std::string str){
	this->type = str;
}

