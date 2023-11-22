/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:07:36 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/22 12:30:11 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
	_filename = filename;
    _s1 = s1;
    _s2 = s2;
    
 	std::cout << "Constructor " << _filename << " called!" << std::endl;
}

std::string Replace::getFilename()
{
	return (this->_filename);
}

Replace::~Replace(void)
{
	std::cout << "Destructor " << getFilename() << " called!" << std::endl;
}