/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 08:14:45 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/22 08:07:43 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie	newZombie(name);
	newZombie.announce();
}