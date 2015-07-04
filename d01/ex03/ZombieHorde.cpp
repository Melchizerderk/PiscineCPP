/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:37:07 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/03 15:14:14 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <time.h>
#include <cstdlib>
#include <string>
#include <iostream>

ZombieHorde::ZombieHorde(int n) : n(n) {
	this->n = n;
	return;
}

ZombieHorde::~ZombieHorde( void ) {
	delete [] tab_zombie;
	return;
}

void	ZombieHorde::setZombieType(std::string type) {
	this->type = type;
}

std::string ZombieHorde::randomChump() {
	
	std::string name;
	int d;

	d = rand() % 7;
	if (d == 0 || d == 2)
		name = "Marz";
	if (d == 1 || d == 3)
		name = "Bertha";
	if (d == 4 || d == 6)
		name = "Patrick";
	if (d == 5 || d == 7)
		name = "Gertrude";
	return (name);
}

void	ZombieHorde::Factory(void) {
	
	int i = 0;
	Zombie *tab_zombie = new Zombie[this->n];
	std::string name;

	srand(time(NULL));
	while (i < this->n)
	{
		tab_zombie[i].name = randomChump();
		tab_zombie[i].type = this->type;
		i++;
	}
	this->tab_zombie = tab_zombie;
	announce(this->tab_zombie);
}

void	ZombieHorde::announce(Zombie *tab_zombie) {
	
	int	i = 0;

	while (i < this->n)
	{
		tab_zombie[i].announce();
		i++;
	}
}
