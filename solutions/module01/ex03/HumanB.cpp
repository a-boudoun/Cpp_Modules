#include"HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::HumanB()
{
	this->name = "";
	this->weapon = NULL;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout<<this->name<<" attacks with his "<<this->weapon->getType()<<std::endl;
	else
		std::cout<<this->name<<" has no weapon "<<std::endl;
}


