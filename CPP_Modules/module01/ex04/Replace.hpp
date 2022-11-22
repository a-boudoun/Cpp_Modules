#pragma once

#include<iostream>
#include<fstream>

class Replace{
	private:
		std::string infile;
		std::string outfile;
	public:
		Replace();
		Replace(std::string name);
		void	sedPro(std::string toFind, std::string NewOne);
};
