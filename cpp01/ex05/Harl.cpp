#include "Harl.hpp"

Harl::Harl(){
	return ;
}

Harl::~Harl(){
	return ;
}

void	Harl::_debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::_info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void	Harl::_error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
	std::string	requests[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	functionPTR	functions[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int	i = 0;

	while (i < 4)
	{
		if (level == requests[i])
			(this->*(functions[i]))();
		i ++;
	}
}