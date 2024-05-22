/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:08:18 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/22 08:12:37 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
 	std::cout << "👷 Constructor " << _name << " called!" << std::endl;
}

std::string	Zombie::getName()
{
	return (this->_name);
}

void	Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "🚜 Destructor " << getName() << " called!" << std::endl;
}
