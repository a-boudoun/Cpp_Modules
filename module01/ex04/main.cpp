#include"Replace.hpp"

using namespace std;
int	main(int ac, char **av)
{
	if (ac != 4)
	{
		cerr<<"usage: "<<av[0]<<"<filename> <str to find> <str to replace with>"<<endl;
		return (0);
	}
	else if (av[2][0] == '\0' || av[3][0] == '\0')
	{
		cerr<<"invalid argument"<<endl;
		return (0);
	}
	else
	{
		Replace replace(av[1]);
		replace.sedPro(av[2], av[3]);
	}
	return (0);
}
