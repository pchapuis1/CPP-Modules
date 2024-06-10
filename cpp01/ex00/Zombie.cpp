#include "Zombie.hpp"

Zombie::Zombie(){
	return ;
}

Zombie::~Zombie(){
	std::cout << "The zombie named: " << this->_name << " has been destroyed" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name){
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}