/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 15:43:25 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/13 18:48:20 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.class.hpp"
#include <cstdlib>
#include <cstring>

int main(int ac, char **av)
{
	char c;
	long int i;
	char *pend;
	Conversion Conv();
	if (ac == 2)
	{
		if (strchr(av[1], '\''))
		{
			c = static_cast<char>(av[1]);
			std::cout << "char : " << Conv.toInt(c) << std::endl;
			std::cout << "char : " << Conv.toDouble(c) << std::endl;
			std::cout << "char : " << Conv.toFloat(c) << std::endl;
		}
		else if (strchr(av[1], 'f'))
		{
			i = strtol(av[1], pend,1);
			i = static_cast<float>(i);
			std::cout << "float : " << Conv.toDouble(i) << std::endl;
			std::cout << "float : " << Conv.toInt(i) << std::endl;
			std::cout << "float : " << Conv.toChar(i) << std::endl;
		}
		else if (strchr(av[i], '.'))
		{
			i = strtol(av[1], pend, 1);
			i = static_cast<double>(i);
			std::cout << "double : " << Conv.toDouble(i) << std::endl;
			std::cout << "double : " << Conv.toInt(i) << std::endl;
			std::cout << "double : " << Conv.toChar(i) << std::endl;
		}
		else
		{
			i = strtol(av[1], pend, 1);
			i = static_cast<int>(i);
			std::cout << "int : " << Conv.toDouble(i) << std::endl;
			std::cout << "int : " << Conv.toFloat(i) << std::endl;
			std::cout << "int : " << Conv.toChar(i) << std::endl;
		}
	}
	else
		std::cout << "invalid parameters";
	return 0;
}
