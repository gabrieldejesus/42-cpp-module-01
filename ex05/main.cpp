/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:20:06 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/12/09 18:10:25 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main() {
  Harl p1 = Harl();

  p1.complain("debug");
  p1.complain("info");
  p1.complain("warning");
  p1.complain("error");
  p1.complain("42");
  
  return (0);
}