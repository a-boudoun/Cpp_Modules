#include"Zombie.hpp"

int main()
{
	int N = 6;
    Zombie *hz= zombieHorde(N, "fii");
	for(int i = 0; i < N; i++)
		hz[i].announce();
    delete [] hz;
}
