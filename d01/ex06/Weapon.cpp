/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 18:43:01 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/03 19:06:21 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	return;
}

Weapon::~Weapon(void) {
	return;
}

std::string const & Weapon::getType(void) {

	return (this->_type);
}

void	Weapon::setType(std::string const & rhs) {

	this->_type = rhs;
}
