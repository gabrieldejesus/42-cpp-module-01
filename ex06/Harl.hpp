/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:02:03 by gde-jesu          #+#    #+#             */
/*   Updated: 2024/05/23 09:02:13 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
# define Harl_HPP

# include <iostream>

class Harl {
  private:
    void  debug( void );
    void  info( void );
    void  warning( void );
    void  error( void );

  public:
    Harl( void );
    ~Harl( void );

    void  complain( std::string level );
    enum  levels { DEBUG, INFO, WARNING, ERROR };
};

#endif