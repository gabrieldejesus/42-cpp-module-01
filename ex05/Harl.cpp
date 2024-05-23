/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:21:30 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/23 08:50:32 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl()
{
 	std::cout << "👷 Constructor Harl called!" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "🚜 Destructor Harl called!" << std::endl;
}

void Harl::debug(void)
{
  std::cout << "\033[97m[ DEBUG ]\033[0m: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
  std::cout << "\033[96m[ INFO ]\033[0m: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
  std::cout << "\033[33m[ WARNING ]\033[0m: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
  std::cout << "\033[0;31m[ERROR]\033[0m: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
  std::string options[4];
  void (Harl::*complainPtr[4])();
  
  options[0] = "debug";
  options[1] = "info";
  options[2] = "warning";
  options[3] = "error";

  complainPtr[0] = &Harl::debug;
  complainPtr[1] = &Harl::info;
  complainPtr[2] = &Harl::warning;
  complainPtr[3] = &Harl::error;
  
  int selected = 0;

  for (int i = 0; i <= (int)options->size(); i++) {
    if (options[i] == level) {
      selected = i;
      break;
    }
    selected = -1;
  }

  switch (selected)
  {
    case Harl::DEBUG:
    {
      (this->*complainPtr[Harl::DEBUG])();
      break;
    }
    case Harl::INFO:
    {
      (this->*complainPtr[Harl::INFO])();
      break;
    }
    case Harl::WARNING:
    {
      (this->*complainPtr[Harl::WARNING])();
      break;
    }
    case Harl::ERROR:
    {
      (this->*complainPtr[Harl::ERROR])();
      break;
    }
    default:
      std::cout << "\033[9m[Probably complaining about insignificant problems]\033[0m" << std::endl;
  } 
}
