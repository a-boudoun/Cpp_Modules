#include"Replace.hpp"

using namespace std;
int	main(int ac, char **av)
{
	if (ac != 4)
	{
		cerr<<"usage: ./replace <filename> <str to find> <str to replace with>"<<endl;
		return (0);
	}
	else
	{
		Replace replace(av[1]);
		replace.sedPro(av[2], av[3]);
	}
	return (0);
}
