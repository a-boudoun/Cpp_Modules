#include"Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain(const Brain &src){
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &rhs){
	std::cout << "Brain Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

void	Brain::setIdea(int i, std::string idea){
	this->ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const{
	return this->ideas[i];
}

