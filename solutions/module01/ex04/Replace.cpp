#include"Replace.hpp"

Replace::Replace(){}

Replace::Replace(std::string name)
	: infile(name)
{
	this->outfile = this->infile + ".replace";
}

void	Replace::sedPro(std::string toFind, std::string NewOne)
{
	std::string content;
	std::ifstream myFile(this->infile);
	if (myFile.is_open())
	{
		std::getline(myFile, content, '\0');
		if (content.empty())
		{
			std::cout<<"empty file"<<std::endl;
			return ;
		}
		std::ofstream NewFile(this->outfile);
		size_t	p;
		p = content.find(toFind);
		while ( p != std::string::npos ) {
			content.erase(p, toFind.length());
			content.insert(p, NewOne);
			p = content.find(toFind);
		}
		NewFile << content;
		NewFile.close();
	}
	else
		std::cerr<<"please make sure the file is there"<<std::endl;
	myFile.close();
}
