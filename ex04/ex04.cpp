/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 18:36:29 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/03 19:11:56 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string	*pstr = &str;
	std::string	&rstr = str;

	std::cout << "Avec pointeur : " << *pstr << std::endl;
	std::cout << "Avec reference : " << rstr << std::endl;
	
	return (0);
}
