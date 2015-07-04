/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 14:17:51 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 18:28:22 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	test("bob");
	
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
	
	return (0);
}
