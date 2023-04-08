#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->name = name;
	this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
	std::cout<<"ScavTrap constructor called"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src){
	std::cout<<"ScavTrap copy constructor called"<<std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout<<"ScavTrap Destructor called"<<std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
	std::cout<<"ScavTrap assignation operator called"<<std::endl;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return *this;
}

void ScavTrap::guardGate(){
	std::cout<<" ScavTrap is now in Gate keeper mode"<<std::endl;
}

void ScavTrap::attack(std::string const & target){
	if (this->energyPoints == 0 || this->hitPoints == 0) {
		std::cout << "ScavTrap " << this->name << " cant't do nothing" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points  of damage" << std::endl;
	this->energyPoints -= 1;
}

