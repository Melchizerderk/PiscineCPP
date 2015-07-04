/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:43:48 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/03 15:03:15 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <string>
#include "Zombie.hpp"

class	ZombieHorde {

	public:

		ZombieHorde(int n);
		~ZombieHorde( void );

		std::string type;
		std::string name;
		Zombie *tab_zombie;
		int			n;

		void setZombieType(std::string type);
		void	Factory(void);
		std::string	randomChump();
		void	announce(Zombie*);
};

#endif
