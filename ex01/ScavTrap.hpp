/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 16:44:35 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 18:31:27 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>

class ScavTrap {

	public :
		ScavTrap(void);
		ScavTrap(std::string const);
		ScavTrap(ScavTrap const &);
		~ScavTrap(void);
	
		ScavTrap& operator=(ScavTrap const &);

		void	 		rangedAttack(std::string const & target);
		void	 		meleeAttack(std::string const & target);
		void		 	takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);
		
		void			testStatus(void);

	private :
		unsigned int	_Hp;
		unsigned int	_Mhp;
		unsigned int	_Ep;
		unsigned int	_Mep;
		int 			_lvl;
		std::string		_name;
		int				_Mad;
		int 			_Rad;
		unsigned int	_Adr;
};

#endif
