/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:14:05 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/13 11:23:42 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name)
{
	_name = name;
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

HumanA::~HumanA(void)
{
	std::cout << "Destructor " << getName() << " called!" << std::endl;
}