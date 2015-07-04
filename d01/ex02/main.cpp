/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:27:23 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/06 17:28:52 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

int main()
{
	ZombieEvent	apo;
	Zombie		*anno_apo;
	std::string	ctype;
	int			n;
	int			i = 0;

	std::cout << "Enter type : ";
	std::cin >> ctype;
	apo.setZombieType(ctype);
	anno_apo = apo.newZombie("Brianz");
	anno_apo->announce();
	
	srand (time(NULL));
	while (i < 5)
	{
		n = rand() % 7;
		anno_apo = apo.randomChump(n);
		anno_apo->announce();
		i++;
	}
	
	return(0);
}
