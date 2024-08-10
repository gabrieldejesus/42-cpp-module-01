/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:15:31 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/08/09 23:07:09 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB {
	private:
		std::string _name;
		Weapon      *_weapon;
  
	public:
		HumanB(std::string name);
		~HumanB(void);

		const	std::string&  getName() const;
		void                setWeapon(Weapon &weapon);
		void                attack();
};

#endif