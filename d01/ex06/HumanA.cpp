/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 18:48:54 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/03 19:21:06 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon & type) : _name(name), _tool(type) {
	return;
}

HumanA::~HumanA(void) {
	return;
}

void	HumanA::attack(void) {

	std::cout << this->_name << " attacks with his " << this->_tool << std::endl;
}
