#include"Zombie.hpp"

Zombie::Zombie(){
	this->name = "";
}

Zombie::~Zombie(){
	std::cout<<this->name<<" is dead"<<std::endl;
}

void	Zombie::announce(void)
{
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void	Zombie::SetName(str name)
{
	this->name = name;
}
