/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:26:50 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/03 14:16:16 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie {

	public:
		
		Zombie(void);	
		Zombie(std::string name);
		~Zombie(void);

		std::string	name;
		std::string	type;
		
		void announce(void);
};

#endif
