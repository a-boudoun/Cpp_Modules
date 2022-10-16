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
	int N = 4;
    Zombie *hz= zombieHorde(N, "fii");
	for(int i = 0; i < N; i++)
		hz[i].announce();
    delete [] hz;
}
