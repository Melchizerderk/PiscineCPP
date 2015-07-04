/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 14:17:19 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 18:57:18 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public :
		FragTrap(void);
		FragTrap(std::string const);
		FragTrap(FragTrap const &);
		~FragTrap(void);
	
		FragTrap& operator=(FragTrap const &);

		void			vaulthunter_dot_exe(std::string const & target);
};

std::ostream & operator<<( std::ostream & o, FragTrap const & rhs);

#endif
