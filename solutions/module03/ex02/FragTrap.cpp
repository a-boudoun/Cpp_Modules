#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name){
    this -> name = name;
    this -> hitPoints = 100;
    this -> energyPoints = 100;
    this -> attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(){
	if (this->energyPoints == 0 || this->hitPoints == 0) {
		std::cout << "FragTrap" << name << " cant't do nothing" << std::endl;
		return;
	}
	std::cout<<"FragTrap: High Five Every Body "<<std::endl;
}
