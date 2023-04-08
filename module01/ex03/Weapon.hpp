#pragma once

#include <iostream>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(void);
		Weapon(std::string type);
		std::string getType();
		void setType(std::string type);
};
