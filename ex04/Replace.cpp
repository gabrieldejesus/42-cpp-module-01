/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:07:36 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/28 10:20:40 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
	_filename = filename;
    _s1 = s1;
    _s2 = s2;

 	std::cout << "Constructor " << getFilename() << " called!" << std::endl;

	std::ifstream	originalFile;
	std::ofstream	copyFile;
	std::string		line;

	originalFile.open("test.txt");
	copyFile.open("filename.replace");

	if (originalFile && copyFile)
	{
		while(getline(originalFile, line))
		{
			copyFile << line << "\n";
		}
		std::cout << "Finished replacement!" << std::endl;
	}

	originalFile.close();
	copyFile.close();
}

std::string Replace::getFilename()
{
	return (this->_filename);
}

Replace::~Replace(void)
{
	std::cout << "Destructor " << getFilename() << " called!" << std::endl;
}