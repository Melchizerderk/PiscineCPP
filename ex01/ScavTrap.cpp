/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 16:44:43 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 20:26:17 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

ScavTrap::ScavTrap(void) : _Hp(100), _Mhp(100), _Ep(50), _Mep(50), _lvl(1), \
							   _Mad(20), _Rad(15), _Adr(3) {
	
	std::cout << "A WILD SC4V-TP APPEARED!!" << std::endl;
	
	return;
}

ScavTrap::ScavTrap(std::string const name) {
	
	this->_name = name;
	std::cout << "The name is " << this->_name << std::endl;

	return;
}

ScavTrap::~ScavTrap(void) {
	
	std::cout << "FR4G-TP master....I....failed..*bzzzt*" << std::endl;
	
	return;
}

ScavTrap::ScavTrap(ScavTrap const &) {
	return;
}

void	ScavTrap::rangedAttack(std::string const & target) {
	
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << \
		" at range, causing " << this->_Rad << " points of damage" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) {

	std::cout << "SC4V-TP " << this->_name << " attacks " << target << \
		" in melee, causing " << this->_Rad << " points of damage" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {

	unsigned int	subamount;

	subamount = amount - this->_Adr;
	if ((subamount) > this->_Hp)
	{
		this->_Hp = 0;
		std::cout << "SC4V-TP " << this->_name << " have been destroyed " << std::endl;
	}
	else
		this->_Hp = this->_Hp - subamount;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	
	this->_Hp = this->_Hp + amount;
	this->_Ep = this->_Ep + amount;
	if (this->_Hp > 100)
		this->_Hp = 100;
	if (this->_Ep > 50)
		this->_Ep = 50;
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

void	ScavTrap::testStatus(void) {
	std::cout << "Hp" << this->_Hp << "Ep" << this->_Ep << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {

	*this = rhs;
	return *this;
}
