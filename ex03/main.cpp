/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:09:52 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/22 09:02:46 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

int main()
{
  std::cout << "+--------------------------------------------------+" << std::endl;

  Weapon weapon1 = Weapon("crude spiked club");

  HumanA bob("Bob", weapon1);
  bob.attack();
  weapon1.setType("some other type of club");
  bob.attack();

  std::cout << "+--------------------------------------------------+" << std::endl;  

  Weapon weapon2 = Weapon("crude spiked club");
  
  HumanB jim("Jim");
  jim.setWeapon(weapon2);
  jim.attack();
  weapon2.setType("some other type of club");
  jim.attack();

  std::cout << "+--------------------------------------------------+" << std::endl;  

  return (0);
}
