#include"Zombie.hpp"

Zombie*	newZombie(str name)
{
	Zombie	*z;
	z = new Zombie;
	z->SetName(name);
	return (z);
}
