#include"HumanA.hpp"
#include"HumanB.hpp"
#include"Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::HumanA()
{
	this->name = "";
	this->weapon = Weapon();
}

void	HumanA::attack(void)
{
	std::cout<<this->name<<" attacks with his "<<this->weapon.getType()<<std::endl;
}
