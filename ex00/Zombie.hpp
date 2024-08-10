/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:08:26 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/08/09 22:17:05 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

# include <iostream>

class	Zombie {
	private:
		std::string _name;
  
	public:
		Zombie(std::string name);
		~Zombie(void);

		std::string	getName();
		void				announce(void);
};

#endif
