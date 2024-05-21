/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:07:36 by gde-jesu          #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
  _s1 = s1;
  _s2 = s2;
  _filename = filename;
  
  std::cout << "👷 Constructor " << getFilename() << " called!" << std::endl;

	// 1. Open the original file
  std::ifstream	originalFile;
	originalFile.open(getFilename().c_str());
  
	// 2. Open the replace file
	std::ofstream	replaceFile;
	replaceFile.open(getFilename().append(".replace").c_str());

	// 3. Found index of every occurrence s1 and save in a variable
	std::size_t	found = 0;
	std::string	line = "";
	std::string newLine = "";

	while (getline(originalFile, line))
	{
		newLine = line;
		found = line.find(s1);
		
		// 4. Copy the line and change in the index of s1 to s2;
		newLine.erase(found, s1.length());
		newLine.insert(found, s2);

		// 5. Save in the replace file the line changed
		if (replaceFile.is_open())
			replaceFile << newLine << std::endl;
	}
	// 6. Close replace file.
	replaceFile.close();

	// 7. CLose the original file.
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
