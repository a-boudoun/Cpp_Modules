#include"HumanA.hpp"
#include"HumanB.hpp"
#include"Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& w) : name(name), weapon(w)
{}

void	HumanA::attack(void)
{
	std::cout<<this->name<<" attacks with his "<<this->weapon.getType()<<std::endl;
}

