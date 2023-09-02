# include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor Zombie called!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor " << this->_name << " called!" << std::endl;
}