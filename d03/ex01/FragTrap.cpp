/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 14:17:05 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 20:25:47 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

FragTrap::FragTrap(void) : _Hp(100), _Mhp(100), _Ep(100), _Mep(100), _lvl(1), \
							   _Mad(30), _Rad(30), _Adr(5) {
	
	std::cout << "FR4G-TP TO THE RESCUE!!" << std::endl;
	
	return;
}

FragTrap::FragTrap(std::string const name) {
	
	this->_name = name;
	std::cout << "The name is " << this->_name << std::endl;

	return;
}

FragTrap::~FragTrap(void) {
	
	std::cout << "My...mission....here...is..done..*bzzzt*" << std::endl;
	
	return;
}

FragTrap::FragTrap(FragTrap const &) {
	return;
}

void	FragTrap::rangedAttack(std::string const & target) {
	
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << \
		" at range, causing " << this->_Rad << " points of damage" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {

	std::cout << "FR4G-TP " << this->_name << " attacks " << target << \
		" in melee, causing " << this->_Rad << " points of damage" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {

	unsigned int	subamount;

	subamount = amount - this->_Adr;
	if ((subamount) > this->_Hp)
	{
		this->_Hp = 0;
		std::cout << "FR4G-TP " << this->_name << " have been destroyed " << std::endl;
	}
	else
		this->_Hp = this->_Hp - subamount;
}

void	FragTrap::beRepaired(unsigned int amount) {
	
	this->_Hp = this->_Hp + amount;
	this->_Ep = this->_Ep + amount;
	if (this->_Hp > 100)
		this->_Hp = 100;
	if (this->_Ep > 100)
		this->_Ep = 100;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	
	int		n;

	if (this->_Ep < 25)
		std::cout << "Not enough energy left!" << std::endl;
	else
	{
		this->_Ep = this->_Ep - 25;
		srand(time(NULL));
		n = rand() % 4;
		if (n == 0)
			std::cout << "vaulthunter used thunder at " << target << \
				" it's not that effective" << std::endl;
		else if (n == 1)
			std::cout << "vaulthunter is listening to music and didn't hear your order " << \
				target << " is laughing at you" << std::endl;
		else if (n == 2)
			std::cout << "vaulthunter used middle finger at " << target << " , " << \
				target << " is mad at you" << std::endl;
		else if (n == 3)
			std::cout << "vaulthunter used bribe at " << target << " , " << \
				target << " is surrendering" << std::endl;
		else if (n == 4)
			std::cout << "vaulthunter fired his laser at " << target << " , " << \
				target << " is obliterated" << std::endl;
	}
}

void	FragTrap::testStatus(void) {
	std::cout << "Hp" << this->_Hp << "Ep" << this->_Ep << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {

	*this = rhs;
	return *this;
}
