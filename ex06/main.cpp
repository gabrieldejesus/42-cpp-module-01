/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:01:30 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/23 09:20:20 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int validation(int argc)
{
	if (argc != 2) {
    std::cout << "\033[0;31m[ ERROR ]\033[0m: Please provide a valid inputs." << std::endl;
    std::cout << "\033[96m[ INFO ]\033[0m: Example: ./harlFilter 'WARNING'" << std::endl;
    return (-1);
  }
  
	return (0);
}

int main(int argc, char *argv[]) {
  if (validation(argc) == -1)
    return(-1);

  Harl harl = Harl();
  harl.complain(argv[1]);
  
  return (0);
}