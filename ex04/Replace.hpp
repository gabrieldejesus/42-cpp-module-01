/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:56:17 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/08/09 23:13:22 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Replace_HPP
# define Replace_HPP

# include <iostream>
# include <fstream>
# include <string>

class	Replace {
  private:
    std::string _filename;
    std::string _s1;
    std::string _s2;

	public:
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace(void);

		std::string getFilename();
};

#endif