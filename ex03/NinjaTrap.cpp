/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 17:56:40 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 20:06:11 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

NinjaTrap::NinjaTrap(void) : ClapTrap() {

	return;
}

NinjaTrap::NinjaTrap(std::string const name) : ClapTrap() {
	
	this->_Hp = 60;
	this->_Mhp = 60;
	this->_Ep = 120;
	this->_Mep = 120;
	this->_lvl = 1;
	this->_name = name;
	this->_claptype = "NINJ4-TP";
	this->_Mad = 60;
	this->_Rad = 5;
	this->_Adr = 0;
	std::cout << this->_claptype <<" TO THE RESCUE!!" << std::endl;
	std::cout << "The name is " << this->_name << std::endl;
	
	return;
}

NinjaTrap::~NinjaTrap(void) {
	
	std::cout << "My...mission....here...is..done..*bzzzt*" << std::endl;
	
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &) : ClapTrap() {
	return;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target) {
	
	(void) target;
	std::cout << this->_name << \
		" open his shoebox to use his dooooom laaaaser" << std::endl;

	return;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target) {

	(void) target;
	std::cout << this->_name << \
		" open his shoebox to use his nail gun!" << std::endl;

	return;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
	
	(void) target;
	std::cout << this->_name << \
		"and open his shoebox to use his special beam canon!" << std::endl;
	
	return;
}
