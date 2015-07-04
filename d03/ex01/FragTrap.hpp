/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 14:17:19 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 18:30:26 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>

class FragTrap {

	public :
		FragTrap(void);
		FragTrap(std::string const);
		FragTrap(FragTrap const &);
		~FragTrap(void);
	
		FragTrap& operator=(FragTrap const &);

		void	 		rangedAttack(std::string const & target);
		void	 		meleeAttack(std::string const & target);
		void		 	takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);
		
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
