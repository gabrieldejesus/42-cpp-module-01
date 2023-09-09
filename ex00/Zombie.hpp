/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:08:26 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/09 16:30:35 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

# include <iostream>

class	Zombie {
	private:
		std::string _name;
  
	public:
		Zombie( std::string name );
		std::string	getName();
		Zombie*		newZombie( std::string name );
		void		randomChump( std::string name );
		void		announce( void );
		~Zombie(void);
};

#endif
