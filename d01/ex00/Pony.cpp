/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:59:40 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/01 13:40:34 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony( void ) {
	
	this->age = 12;
	this->height = 1.2;
	this->weight = 200;
	this->name = "Coriandre";
	this->color = "chutney";
	return;
}

Pony::~Pony( void ) {
	return;
}

void	Pony::ponyOnTheStack( void ) {

	Pony* P1 = new Pony;
	
	std::cout << "Pony on the heap!" << std::endl;
	std::cout << P1->name << " is going for a stroll" << std::endl;
	P1->weight = P1->weight - 2;
	std::cout << P1->name << " lost 2kg walking so long, he now weight " << P1->weight << std::endl;
	std::cout << "During his stroll he got dirty, his " << P1->color << " color turned ";
	P1->color = "black";
	std::cout << P1->color << std::endl;
	std::cout << P1->name << " is " << P1->age << " years old and is " << P1->height << " meter tall" << std::endl;	
	
}

void	Pony::ponyOnTheHeap(Pony *P2) {

	std::cout << "Pony on the stack!" << std::endl;	
	std::cout << P2->name << " is going for a stroll" << std::endl;
	P2->weight = P2->weight - 2;
	std::cout << P2->name << " lost 2kg walking so long, he now weight " << P2->weight << std::endl;
	std::cout << "During his stroll he got dirty, his " << P2->color << " color turned ";
	P2->color = "black";
	std::cout << P2->color << std::endl;
	std::cout << P2->name << " is " << P2->age << " years old and is " << P2->height << " meter tall" << std::endl;	

}
