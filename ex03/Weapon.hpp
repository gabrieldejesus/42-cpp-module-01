/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:10:10 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/08/09 23:05:17 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
# define Weapon_HPP

# include <iostream>

class	Weapon {
	private:
		std::string _type;
  
	public:
		Weapon(std::string type);
		~Weapon(void);
		
		const std::string& getType() const;
		void setType(std::string type);
};

#endif