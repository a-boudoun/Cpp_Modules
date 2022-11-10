#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const & target){
	if (energyPoints == 0 || hitPoints == 0) {
		std::cout << "ClapTrap " << name << "cant't do nothing" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << "points  of damage" << std::endl;
	energyPoints -= 1;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (energyPoints == 0 || hitPoints == 0) {
		std::cout << "ClapTrap " << name << "cant't do nothing" << std::endl;
		return;
	}
	std::cout<<"ClapTrap"<<name<<"got"<<amount<<"hit points back"<<std::endl;
	hitPoints += amount ? (hitPoints + amount) <= 10 : 10 - hitPoints;
	energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout<<"ClapTrap"<<name<<"is taking"<<amount<<"damage"<<std::endl;
	hitPoints -= amount ? (amount <= hitPoints) : hitPoints;
}
