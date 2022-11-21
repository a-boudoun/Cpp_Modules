#include"iter.hpp"

void printInt(int &i)
{
	std::cout<< i <<std::endl;
}

void printStr(std::string const &s)
{
	std::cout<< s <<std::endl;
}

int main()
{
	int i[6] = {1, 2, 3, 4, 5, 6};
	::iter(i, 6, printInt);

	std::string str[4] = {
		"one",
		"two",
		"three",
		"four"
	};
	::iter(str, 4, printStr);

}
