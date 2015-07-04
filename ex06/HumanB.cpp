/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 18:55:35 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/03 19:27:18 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	return;
}

HumanB::~HumanB(void) {
	return;
}

void	HumanB::setWeapon(Weapon wep) {
	this->_tool = &wep;
}

void	HumanB::attack(void) {

	std::cout << this->_name << " attacks with his " << this->*_tool << std::endl;
}
