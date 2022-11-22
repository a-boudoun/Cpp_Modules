#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & rhs);
		~FragTrap();
		void highFivesGuys(void);
};
