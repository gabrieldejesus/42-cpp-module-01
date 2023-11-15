/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:14:05 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/15 18:08:36 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	this->_name = name;
 	std::cout << "Constructor " << _name << " called!" << std::endl;
}

std::string const& HumanA::getName() const
{
	return (this->_name);
}

void HumanA::setName(std::string name)
{
	this->_name = name;
}

void HumanA::attack()
{
	std::cout << getName() << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor " << getName() << " called!" << std::endl;
}