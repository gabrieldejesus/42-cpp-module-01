/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:25:08 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/08/09 22:31:58 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
  if (N <= 0) {
    return (NULL);
  }
  
  Zombie  *newZombie = new Zombie[N];
	
	for (int i = 0; i < N; ++i) {
    newZombie[i].setName(name);
  }
  return (newZombie);
}
