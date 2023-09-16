/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:08:35 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/16 16:34:21 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie	p1("Foo1");
	Zombie	*p2 = p1.newZombie("Foo2");
	
	Zombie	random("Foo3");
	random.randomChump("Foo4");

	delete	p2;
	return (0);
}
