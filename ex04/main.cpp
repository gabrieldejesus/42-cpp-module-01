/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:54:06 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/22 10:00:20 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

/* [INFO]
* Example: make re && ./Replace index.js z test
*/

int main(int argc, char *argv[])
{
  if (argc != 4) {
    std::cout << "\033[0;31m[ERROR]\033[0m: Provide filename, s1, and s2 in order." << std::endl;
    return (0);
  }

  const char*   filename = argv[1];
  std::ifstream file;
  std::string   s1 = argv[2];
  std::string   s2 = argv[3];

  file.open(filename);
  if (file.fail() || s1.empty() || s2.empty()) {
    std::cout << "\033[0;31m[ERROR]\033[0m: Please provide a valid inputs." << std::endl;
    return (0);
  }
  file.close();

  Replace(filename, s1, s2);
  return (0);
}
