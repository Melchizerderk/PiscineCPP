/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 17:09:59 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/15 18:53:58 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int	main (void)
{
	Fixed 	a;
	Fixed	const b( Fixed(5.05f) * Fixed( 2 ));
	Fixed const c(0);
	//Fixed	const c( 42.42f);
	//Fixed	const d( b );

	/*if (a <= b)
		std::cout << "true" << std::endl;*/
	//std::cout << a / b << std::endl;
//	std::cout <<  b << std::endl;
//	std::cout <<  a / c << std::endl;
/*	std::cout << a + b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a - b << std::endl;*/
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a , b) << std::endl;

	return (0);
}
