/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:27:17 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/06 17:23:50 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "Zombie.hpp"

class	ZombieEvent {

	public:
		
		ZombieEvent(void);
		~ZombieEvent(void);
		
		void	setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		Zombie*	randomChump(int n);		
		std::string	type;

};

#endif
