/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 12:00:00 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/01 11:26:12 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ft(Pony *test, Pony* P2)
{
	test->ponyOnTheStack();
	test->ponyOnTheHeap(P2);
	delete P2;
}

int		main( void )
{
	Pony	test;
	Pony*	P2 = new Pony;
	
	ft(&test, P2);

	return (0);
}
