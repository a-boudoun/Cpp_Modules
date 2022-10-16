#include"Zombie.hpp"

Zombie*	newZombie(str name)
{
	Zombie	*z;
	z = new Zombie;
	z->SetName(name);
	return (z);
}

void	randomChump(str name)
{
	Zombie z;
	z.SetName(name);
	z.announce();
}

int main()
{
    Zombie *hz= newZombie("Heap Zombie");
    hz->announce();
    delete hz;
	randomChump("Stack Zombie");
}
