/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 16:41:30 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 20:27:36 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

ClapTrap::ClapTrap(void) {
	
	std::cout << "Creating new claptrap" << std::endl;
	
	return;
}

ClapTrap::ClapTrap(std::string const name) {
	
	std::cout << "Giving him a name" << name << std::endl;
	return;
}

ClapTrap::~ClapTrap(void) {
	
	std::cout << "Terminating the claptrap" << std::endl;
	
	return;
}

ClapTrap::ClapTrap(ClapTrap const &) {
	return;
}

void	ClapTrap::rangedAttack(std::string const & target) {
	
	std::cout << this->_claptype << " " << this->_name << " attacks " << target << \
		" at range, causing " << this->_Rad << " points of damage" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) {

	std::cout << this->_claptype << " " << this->_name << " attacks " << target << \
		" in melee, causing " << this->_Rad << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	unsigned int	subamount;

	subamount = amount - this->_Adr;
	if ((subamount) > this->_Hp)
	{
		this->_Hp = 0;
		std::cout << this->_claptype << " " << this->_name << " have been destroyed " << std::endl;
	}
	else
		this->_Hp = this->_Hp - subamount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	
	this->_Hp = this->_Hp + amount;
	this->_Ep = this->_Ep + amount;
	if (this->_Hp > this->_Mhp)
		this->_Hp = 100;
	if (this->_Ep > this->_Mep)
		this->_Ep = 100;
}

void	ClapTrap::testStatus(void) {
	std::cout << "Hp" << this->_Hp << "Ep" << this->_Ep << std::endl;
}

std::ostream & operator<<( std::ostream & o, ClapTrap const & rhs) {
	
	o << rhs;
	return o;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {

	*this = rhs;
	return *this;
}
