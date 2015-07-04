/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:27:05 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/03 14:08:36 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void){
	return;
}

ZombieEvent::~ZombieEvent(void) {
	return;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	
	Zombie* nzbi = new Zombie (name);
	
	nzbi->type = this->type;
	return nzbi;
}

Zombie*	ZombieEvent::randomChump(int n) {
	
	std::string name;
	
	if (n == 0 || n == 2)
		name = "Marz";
	else if (n == 1 || n == 3)
		name = "Bertha";
	else if (n == 4 || n == 6)
		name = "Patrick";
	else if (n == 5 || n == 7)
		name = "Gertrude";
	Zombie* nzbi = new Zombie (name);

	nzbi->type = this->type;
	return nzbi;
}
