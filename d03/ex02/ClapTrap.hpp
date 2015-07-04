/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 17:19:19 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 18:56:14 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap {

	public :
		ClapTrap(void);
		ClapTrap(std::string const);
		ClapTrap(ClapTrap const &);
		~ClapTrap(void);
	
		ClapTrap& operator=(ClapTrap const &);

		void	 		rangedAttack(std::string const & target);
		void	 		meleeAttack(std::string const & target);
		void		 	takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);
		
		void			testStatus(void);

	protected :
		unsigned int	_Hp;
		unsigned int	_Mhp;
		unsigned int	_Ep;
		unsigned int	_Mep;
		int 			_lvl;
		std::string		_name;
		std::string		_claptype;
		int				_Mad;
		int 			_Rad;
		unsigned int	_Adr;
};

std::ostream & operator<<( std::ostream & o, ClapTrap const & rhs);

#endif
