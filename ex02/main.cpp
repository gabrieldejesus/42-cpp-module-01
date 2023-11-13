/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:20:17 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/13 10:02:51 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main()
{   
    std::string variable = "HI THIS IS BRAIN";
    std::string* stringPTR = &variable;
    std::string &stringREF = variable;

    // print memory
    std::cout << "+----------------------------------------------------------------+" << std::endl;
    std::cout << "| The memory address of the string variable --> " << &variable << "   |" << std::endl;
    std::cout << "| The memory address held by stringPTR --> " << stringPTR << "        |" << std::endl;
    std::cout << "| The memory address held by stringREF --> " << &stringREF << "        |" << std::endl;
    
    std::cout << "+----------------------------------------------------------------+" << std::endl;

    // print value
    std::cout << "| The value of the string variable --> " << variable << "          |" << std::endl;
    std::cout << "| The value pointed to by stringPTR --> " << *stringPTR << "         |" << std::endl;
    std::cout << "| The value pointed to by stringREF --> " << stringREF << "         |" << std::endl;
    std::cout << "+----------------------------------------------------------------+" << std::endl;

    return (0);
}