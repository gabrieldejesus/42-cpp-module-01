/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:08:35 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/21 20:06:32 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie	p1("Foo1");
	p1.announce();
	std::cout << "----------------------------" << std::endl;

	Zombie	*p2 = p1.newZombie("Foo2");
	p2->announce();
	std::cout << "----------------------------" << std::endl;
	
	Zombie	random("Foo3");
	random.announce();
	std::cout << "----------------------------" << std::endl;

	random.randomChump("Foo4");

	delete	p2;
	return (0);
}
