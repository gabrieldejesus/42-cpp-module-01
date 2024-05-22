/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:07:36 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/22 09:58:44 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
  _s1 = s1;
  _s2 = s2;
  _filename = filename;
  
  std::cout << "👷 Constructor " << getFilename() << " called!" << std::endl;

  std::ifstream	originalFile;
	originalFile.open(getFilename().c_str());
  
	std::ofstream	replaceFile;
	replaceFile.open(getFilename().append(".replace").c_str());

	std::size_t	found = 0;
	std::string	line;
	std::string newLine;

	while (getline(originalFile, line))
	{
		newLine = line;
		found = line.find(this->_s1);
		
		if (found != std::string::npos) {
			newLine.erase(found, this->_s1.length());
			newLine.insert(found, this->_s2);
		}
		
		if (replaceFile.is_open())
			replaceFile << newLine << std::endl;
	}
	replaceFile.close();
	originalFile.close();
}

std::string Replace::getFilename()
{
	return (this->_filename);
}

Replace::~Replace(void)
{
	std::cout << "🚜 Destructor " << getFilename() << " called!" << std::endl;
}
