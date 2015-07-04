/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:26:38 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/06 17:08:43 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {
	return;
}

Zombie::~Zombie(void) {
	return;
}

void	Zombie::announce( void ) {

	std::cout << "<" << this->name << " (" << this->type << ")> " << "Braiiiinnnnnns....." << std::endl;	
}
