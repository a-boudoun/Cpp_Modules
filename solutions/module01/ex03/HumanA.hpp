#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

#ifndef HUMANA
#define HUMANA

class HumanA{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA();
		HumanA(std::string name, Weapon& weapon);
		void	attack(void);
};

#endif
#endif
