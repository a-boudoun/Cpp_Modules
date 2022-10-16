#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include"HumanA.hpp"
#include"HumanB.hpp"
#ifndef WEAPON
#define WEAPON

class Weapon{
	private:
		std::string type;
	public:
		Weapon(void);
		Weapon(std::string type);
		std::string getType();
		void setType(std::string type);
};
#endif
#endif
