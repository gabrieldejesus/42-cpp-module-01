/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:08:18 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/16 16:32:23 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
 	std::cout << "Constructor " << _name << " called!" << std::endl;
}

std::string	Zombie::getName()
{
	return (this->_name);
}

void	Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	Zombie::newZombie(std::string name )
{
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
}

void	Zombie::randomChump(std::string name)
{
	Zombie	newZombie(name);
	newZombie.announce();
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor " << getName() << " called!" << std::endl;
}
