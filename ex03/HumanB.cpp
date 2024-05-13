/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:15:35 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/13 08:54:44 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
 	std::cout << "Constructor " << _name << " called!" << std::endl;
}

std::string const& HumanB::getName() const
{
	return (this->_name);
}

void HumanB::setName(std::string name)
{
	this->_name = name;
}

void HumanB::attack()
{
	std::cout << getName() << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor " << getName() << " called!" << std::endl;
}