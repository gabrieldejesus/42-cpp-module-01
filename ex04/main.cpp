/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:54:06 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/08/09 23:50:40 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

int validation(int argc, char *argv[])
{
	if (argc != 4) {
    std::cout << "\033[0;31m[ERROR]\033[0m: Provide filename, s1, and s2 in order." << std::endl;
    return (-1);
  }

  std::ifstream file;
  std::string   s1 = argv[2];
  std::string   s2 = argv[3];

  file.open(argv[1]);
  if (file.fail() || s1.empty() || s2.empty()) {
    std::cout << "\033[0;31m[ERROR]\033[0m: Please provide a valid inputs." << std::endl;
    return (-1);
  }
  file.close();
	return (0);
}

int main(int argc, char *argv[])
{
  if (validation(argc, argv) == -1)
    return(-1);

  Replace(argv[1], argv[2], argv[3]);
  return (0);
}
