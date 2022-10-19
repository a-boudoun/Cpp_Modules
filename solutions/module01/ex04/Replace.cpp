#include"Replace.hpp"

Replace::Replace(){}

Replace::Replace(std::string name)
	: infile(name)
{
	this->outfile = this->infile + ".replace";
}

void	Replace::sedPro(std::string toFind, std::string NewOne)
{
	
}
