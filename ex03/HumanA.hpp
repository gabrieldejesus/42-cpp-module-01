/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:14:28 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/13 11:25:03 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
# define HumanA_HPP

# include <iostream>

class	HumanA {
	private:
		std::string _name;
  
	public:
		HumanA(std::string name);
		~HumanA(void);

		const std::string& getName() const;
		void setName(std::string name);
};

#endif