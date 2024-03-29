/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:59:38 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/11/13 09:11:38 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

# include <iostream>

class	Zombie {
	private:
		std::string _name;
  
	public:
		Zombie();
		~Zombie(void);
		
		std::string	getName();
		void		setName(std::string name);
		void		announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif