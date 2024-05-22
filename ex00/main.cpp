/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:08:35 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/22 08:43:21 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie	z1("Foo1");
	z1.announce();

	Zombie	*z2 = z1.newZombie("Foo2");
	z2->announce();
	
	Zombie	z3("Foo3");
	z3.randomChump("Foo4");

	delete	z2;
	return (0);
}
