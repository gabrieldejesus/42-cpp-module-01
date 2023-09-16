/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:57:32 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/16 17:00:53 by gde-jesu         ###   ########.fr       */
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

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
    (void) N;
	Zombie	*newZombie = new Zombie(name);
    return (newZombie);
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor " << getName() << " called!" << std::endl;
}
