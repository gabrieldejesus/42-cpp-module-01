/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:07:36 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/12/09 13:15:23 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
  _s1 = s1;
  _s2 = s2;
  _filename = filename;

 	std::cout << "Constructor " << getFilename() << " called!" << std::endl;

  std::ifstream	originalFile;
  std::ofstream	replaceFile;
  std::size_t		posFound = 0;
  std::size_t 	pos = 0;
  std::string		line;

	originalFile.open(getFilename().c_str());
	replaceFile.open(getFilename().append(".replace").c_str());

	if (originalFile && replaceFile)
	{
		while(getline(originalFile, line))
		{
			posFound = line.find(s1, pos);

			while (posFound != std::string::npos)
			{			
				if (posFound != std::string::npos)
				{
					line.erase(posFound, s1.length());
					line.insert(posFound, s2);
				}
				posFound = line.find(s1, posFound + 1);
			}
			replaceFile << line << "\n";
		}
		std::cout << "Finished replacing all ocurrences of " << s1 << " with " << s2 << std::endl;
	}

	originalFile.close();
	replaceFile.close();
}

std::string Replace::getFilename()
{
	return (this->_filename);
}

Replace::~Replace(void)
{
	std::cout << "Destructor " << getFilename() << " called!" << std::endl;
}