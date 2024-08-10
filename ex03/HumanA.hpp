/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:14:28 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/08/09 23:06:09 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
# define HumanA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA {
	private:
		std::string _name;
		Weapon      &_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		const std::string&  getName() const;
		void                attack();
};

#endif