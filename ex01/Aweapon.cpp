/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:06:12 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/09 17:14:03 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aweapon.hpp"

Aweapon::Aweapon(void) {

	return;
}

Aweapon::Aweapon(std::string const & name, int apcost, int damage) {

	this->_name = name;
	this->_apc = apcost;
	this->_Dmg = dmg;
	
	return;
}


