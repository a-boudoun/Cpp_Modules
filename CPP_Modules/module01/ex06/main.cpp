#include"Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return (0);
	}
	Harl harl;
	harl.complain(av[1]);
}
