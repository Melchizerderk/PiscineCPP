/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 14:17:05 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 19:25:09 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

FragTrap::FragTrap(void) : ClapTrap() {
	
	return;
}

FragTrap::FragTrap(std::string const name) : ClapTrap() {

	this->_Hp = 100;
	this->_Mhp = 100;
	this->_Ep = 100;
	this->_Mep = 100;
	this->_name = name;
	this->_lvl = 1;
	this->_claptype = "FR4G-TP";
	this->_Mad = 30;
	this->_Rad = 20;
	this->_Adr = 5;
	std::cout << this->_claptype <<" TO THE RESCUE!!" << std::endl;
	std::cout << "The name is " << this->_name << std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	
	std::cout << "My...mission....here...is..done..*bzzzt*" << std::endl;
	
	return;
}

FragTrap::FragTrap(FragTrap const &) : ClapTrap() {
	return;
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

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs) {

	o << rhs;
	return o;
}
