/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 16:36:25 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/14 18:45:31 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<std::string> ptr1(5);
	Array<std::string>	ptr2(5);

	ptr1[0] = '1';
	ptr1[1] = '2';
	ptr1[2] = '3';
	ptr1[3] = '4';
	ptr1[4] = '5';

	std::cout << ptr1[0] << std::endl;
	std::cout << ptr1[1] << std::endl;
	std::cout << ptr1[2] << std::endl;
	std::cout << ptr1[3] << std::endl;
	std::cout << ptr1[4] << std::endl;

	ptr2 = ptr1;

	std::cout << ptr2[0] << std::endl;
	std::cout << ptr2[1] << std::endl;
	std::cout << ptr2[2] << std::endl;
	std::cout << ptr2[3] << std::endl;
	std::cout << ptr2[4] << std::endl;

	Array<std::string> ptr3(ptr1);
	
	std::cout << ptr3[0] << std::endl;
	std::cout << ptr3[1] << std::endl;
	std::cout << ptr3[2] << std::endl;
	std::cout << ptr3[3] << std::endl;
	std::cout << ptr3[4] << std::endl;

	try
	{
		ptr1[6];
	}
	catch(std::exception & e)
	{
		std::cout << "n too big" << std::endl;
	}
}
