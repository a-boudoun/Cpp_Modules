#include"Zombie.hpp"

int main()
{
    Zombie *hz= newZombie("Heap Zombie");
	randomChump("Stack Zombie");
    hz->announce();
    delete hz;
}
