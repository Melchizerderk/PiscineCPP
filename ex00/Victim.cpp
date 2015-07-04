/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:40:32 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/09 13:53:42 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim(void) {

	return;
}

Victim::Victim(Victim const &) {

	return;
}

Victim::Victim(std::string name) {

	this->_name = name;
	std::cout << "Some random victim called " << this->_name << \
		" just popped !" << std::endl;

	return;
}

Victim::~Victim(void) {

	std::cout << "Victim " << this->_name << \
		" just died for no apparent reason !" << std::endl;	
	
	return;
}

void	Victim::announce(void) {

	std::cout << "I'm " << this->_name << " and i like otters" << std::endl;
}

std::string Victim::getName(void) const {
	
	return (this->_name);
}

void 		Victim::getPolymorphed(void) const {

	std::cout << this->_name << \
		" has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs) {
	
	o << "I'm " << rhs.getName() << " and i like otters !" << std::endl;
	return o;
}
