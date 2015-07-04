/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 17:45:35 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 19:26:09 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

ScavTrap::ScavTrap(std::string const name) : ClapTrap() {

	this->_Hp = 100;
	this->_Mhp = 100;
	this->_Ep = 50;
	this->_Mep = 50;
	this->_name = name;
	this->_claptype = "SC4V-TP";
	this->_lvl = 1;
	this->_Mad = 20;
	this->_Rad = 15;
	this->_Adr = 3;
	std::cout << "A WILD " << this->_claptype << "APPEARED!!" << std::endl;
	std::cout << "The name is " << this->_name << std::endl;
	
	return;
}

ScavTrap::ScavTrap(void) : ClapTrap() {
	
	return;
}

ScavTrap::~ScavTrap(void) {
	
	std::cout << "FR4G-TP master....I....failed..*bzzzt*" << std::endl;
	
	return;
}

ScavTrap::ScavTrap(ScavTrap const &) : ClapTrap() {
	return;
}

void	ScavTrap::challengeNewcomer(std::string const & target) {
	
	int		n;
	
	this->_Ep = this->_Ep - 25;
	srand(time(NULL));
	n = rand() % 4;
	if (n == 0)
		std::cout << "This time " << target << \
			" it'll be the mud fight challenge!" <<  std::endl;
	else if (n == 1)
		std::cout << "Now " << target << \
			" you'll be challenged to the cow race !" << std::endl;
	else if (n == 2)
		std::cout << "And there is this " << target << \
			" ! It's time for the dodgebomb!!" << std::endl;
	else if (n == 3)
		std::cout << "Be ready " << target << \
			" ! It's time for the Blinded Piloting Challenge " << std::endl;
	else if (n == 4)
		std::cout << "I hope you're in your best shape " << \
			target << " this time it's a Mano-a Mano with a Bullymond!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs) {

	o << rhs;
	return o;
}
