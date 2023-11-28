/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:56:17 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/28 10:02:56 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Replace_HPP
# define Replace_HPP

# include <iostream>
# include <fstream> 

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