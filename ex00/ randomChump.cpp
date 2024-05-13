/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    randomChump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 07:50:30 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/13 07:52:25 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie	newZombie(name);
	newZombie.announce();
}