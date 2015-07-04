/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:27:23 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/03 15:03:51 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

int main()
{
	int			n;
	
	n = 10;
	std::cout << "Enter number : ";
	std::cin >> n;

	ZombieHorde	apo(n);

	apo.setZombieType("undead");
	apo.Factory();
	
	return(0);
}
