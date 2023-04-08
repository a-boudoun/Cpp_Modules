#include"WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout<<"WrongCat constructor called"<<std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(std::string str){
	this->type = str;
	std::cout<<"WrongCat constructor called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat &src){
	std::cout<<"WrongCat Copy constructor called"<<std::endl;
	*this = src;
}

WrongCat::~WrongCat(){
	std::cout<<"WrongCat destructor called"<<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs){
	std::cout<<"WrongCat Copy assignment operator called"<<std::endl;
	this->type = rhs.type;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout<<"the WrongCat is Meowing"<<std::endl;
}
