#include "Harl.hpp"

Harl::Harl() {}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
	void (Harl::*f_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string level_s[] = {"debug", "info", "warning", "error"};
	int i;
	for(i = 0; i < 4; i++)
	{
		if (level == level_s[i])
			break;
	}
	switch (i)
	{
		case 0:
			(this->*f_ptr[i++])();
		case 1:
			(this->*f_ptr[i++])();
		case 2:
			(this->*f_ptr[i++])();
		case 3:
			(this->*f_ptr[i])();
			break;
		default:
			std::cout<<"[Probably complaining about insignificant problems]"<<std::endl;
	}
}
