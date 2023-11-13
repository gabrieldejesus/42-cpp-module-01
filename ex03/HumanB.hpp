/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:15:31 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/13 11:25:25 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP

# include <iostream>

class	HumanB {
	private:
		std::string _name;
  
	public:
		HumanB(std::string name);
		~HumanB(void);

		const std::string& getName() const;
		void setName(std::string name);
};

#endif