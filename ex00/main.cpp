/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:08:35 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/16 15:28:16 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie	p1("Foo1");
	Zombie	*p2 = p1.newZombie("Foo2");
	
	Zombie	p3("Foo3");
	p3.randomChump("Foo4");

	delete	p2;
	return (0);
}
