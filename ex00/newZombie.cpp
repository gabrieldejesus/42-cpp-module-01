/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 07:48:08 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/22 08:07:39 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string name )
{
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
}