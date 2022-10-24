#include"Zombie.hpp"

Zombie*	zombieHorde(int N, str name)
{
	if (N <= 0)
		return (NULL);
	Zombie *zombies = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombies[i].SetName(name);
	return (zombies);
}
