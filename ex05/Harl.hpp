/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:21:02 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/12/09 17:45:19 by gde-jesu         ###   ########.fr       */
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