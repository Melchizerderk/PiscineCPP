/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 17:58:56 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 20:05:43 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <string>
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap {

	public :
		NinjaTrap(void);
		NinjaTrap(std::string const name);
		NinjaTrap(NinjaTrap const &);
		~NinjaTrap(void);
	
		NinjaTrap& operator=(NinjaTrap const &);

		void			ninjaShoebox(FragTrap const & target);
		void			ninjaShoebox(ScavTrap const & target);
		void			ninjaShoebox(NinjaTrap const & target);
};

#endif
