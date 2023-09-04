/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:08:26 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/02 20:09:02 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

# include <iostream>

class Zombie {
	private:
    	std::string _name;
  
	public:
		Zombie(void);
		
		void announce( void )
		{
			std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
		}
			
		Zombie  *newZombie( std::string name )
		{
			Zombie *newZombie = new Zombie();
			_name = name;
			return (newZombie);
		}
		
		void randomChump( std::string name )
		{
			Zombie  InstanceZombie;
			_name = name;
			announce();
		}
		~Zombie(void);
};

#endif
