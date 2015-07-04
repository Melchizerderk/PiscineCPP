/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 16:46:15 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 18:57:30 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :
		ScavTrap(void);
		ScavTrap(std::string const);
		ScavTrap(ScavTrap const &);
		~ScavTrap(void);
	
		ScavTrap& operator=(ScavTrap const &);

		void			challengeNewcomer(std::string const & target);
};

std::ostream & operator<<( std::ostream & o, ScavTrap const & rhs);

#endif
