/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:07:36 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/22 12:10:25 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Replace.hpp"

Replace::Replace(std::string filename)
{
	_filename = filename;
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