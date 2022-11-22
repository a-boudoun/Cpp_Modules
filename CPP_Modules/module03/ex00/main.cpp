#include "ClapTrap.hpp"

int main()
{
	ClapTrap leet("1337");
	ClapTrap ofppt("ofppt");

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
