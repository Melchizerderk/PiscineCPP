/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:39:56 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/09 14:08:30 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>
#include "Victim.hpp"

Sorcerer::Sorcerer(void) {

	return;
}

Sorcerer::Sorcerer(Sorcerer const &) {

	return;
}

Sorcerer::Sorcerer(std::string name, std::string title) {

	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void) {

	std::cout << this->_name << ", " << this->_title << \
		", is dead. Consequences will never be the same !" << std::endl;
	return;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {

	*this = rhs;
	return *this;
}

void	Sorcerer::announce(void) {
	
	std::cout << "I am " << this->_name << ", " << this->_title << \
		", and i like ponies !" << std::endl;
}

std::string	Sorcerer::getName(void) const {

	return (this->_name);
}

std::string Sorcerer::getTitle(void) const {

	return (this->_title);
}

void	Sorcerer::polymorph(Victim const & type) {

	type.getPolymorphed();
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs) {

	o << "I am "<< rhs.getName() << ", " << \
		rhs.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}
