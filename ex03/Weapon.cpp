/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:10:16 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/13 11:04:22 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
 	std::cout << "Constructor " << _type << " called!" << std::endl;
}

std::string const& Weapon::getType() const
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor " << getType() << " called!" << std::endl;
}