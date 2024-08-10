/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:46:51 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/08/09 22:41:11 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	Zombie	*p1 = zombieHorde(10, "Foo1");

	for (int i = 0; i < 10; ++i) {
		p1[i].announce();
  }

	delete []p1;
	return (0);
}
