/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 14:17:51 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 18:31:44 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap	test("bob");
	ScavTrap	test2("roger");

	test.rangedAttack("patrick");
	test.meleeAttack("patrick");
	test.takeDamage(10);
	test.testStatus();
	test.beRepaired(20);
	test.vaulthunter_dot_exe("patrick");
	test.testStatus();
	test.beRepaired(20);
	test.testStatus();
	test.takeDamage(110);
	test.testStatus();
	
	test2.rangedAttack("gunther");
	test2.meleeAttack("gunther");
	test2.takeDamage(10);
	test2.testStatus();
	test2.beRepaired(20);
	test2.testStatus();
	test2.challengeNewcomer("gunther");

	return (0);
}
