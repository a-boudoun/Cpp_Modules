#include "ScavTrap.hpp"

int main()
{
	ScavTrap leet("1337");
	ScavTrap ofppt("ofppt");
	ScavTrap ot("ot");
	std::cout<<ofppt.getAttackDamage()<<std::endl;
    leet.setAttackDamage(1);
	ofppt.setAttackDamage(1);
	leet.attack(ofppt.getName());
    ofppt.takeDamage(leet.getAttackDamage());
	ofppt.attack(leet.getName());
	leet.takeDamage(ofppt.getAttackDamage());
	leet.setAttackDamage(1337);
	leet.attack(ofppt.getName());
	ofppt.takeDamage(leet.getAttackDamage());
	ofppt.attack("ENSA");
	return (0);
}
