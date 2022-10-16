#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#define str std::string

#ifndef ZOMBIE
#define ZOMBIE

class Zombie{
	private:
		str	name;
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	SetName(str name);

};

Zombie*	newZombie(str name);
void	randomChump(str name);

#endif
#endif
