#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

#ifndef HUMANB
#define HUMANB

class HumanB{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon *weapon);
		void	attack(void);
};

#endif
#endif
