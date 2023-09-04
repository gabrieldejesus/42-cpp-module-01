/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:08:18 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/02 20:08:19 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor Zombie called!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor " << this->_name << " called!" << std::endl;
}
