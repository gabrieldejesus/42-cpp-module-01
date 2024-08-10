/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:08:35 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/08/09 22:22:14 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	randomChump(std::string name);
Zombie*	newZombie(std::string name );

int main()
{
	Zombie	*z1 = newZombie("Zé do Caixão");
	z1->announce();
	
	randomChump("Zé da Manga");

	delete	z1;
	return (0);
}
