#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name){
    this -> name = name;
    this -> hitPoints = 100;
    this -> energyPoints = 100;
    this -> attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src){
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs){
	std::cout << "FragTrap assignation operator called" << std::endl;
	this -> name = rhs.name;
	this -> hitPoints = rhs.hitPoints;
	this -> energyPoints = rhs.energyPoints;
	this -> attackDamage = rhs.attackDamage;
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(){
	if (this->energyPoints == 0 || this->hitPoints == 0) {
		std::cout << "FragTrap" << name << " cant't do nothing" << std::endl;
		return;
	}
	std::cout<<"FragTrap: High Five Everybody "<<std::endl;
}
