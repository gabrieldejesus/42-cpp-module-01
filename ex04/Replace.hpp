/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:56:17 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/22 12:11:29 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Replace_HPP
# define Replace_HPP

# include <iostream>

class	Replace {
    private:
        std::string _filename;

	public:
		Replace(std::string filename);
		~Replace(void);

		std::string getFilename();
        // bool replace(std::string filename ,std::string s1, std::string s2)
};

#endif