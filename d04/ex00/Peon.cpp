/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:41:17 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/09 14:44:33 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(void) {
	
	return;
}

Peon::Peon(std::string name) : Victim(name) {
	
	this->_name = name;	
	std::cout << "Zog Zog." << std::endl;
	return;
}

Peon::~Peon(void) {
	
	std::cout << "Bleuark..." << std::endl;
	return;
}

void	Peon::getPolymorphed(void) const {

	std::cout << this->_name << \
		" has been turned into a pink pony !" << std::endl;
}

std::string	Peon::getName(void) const {
	
	return (this->_name);
}

std::ostream & operator<<(std::ostream & o, Peon const & rhs) {

	o << "I'm " << rhs.getName() << " and i like otters !" << std::endl;
	return o;
}
