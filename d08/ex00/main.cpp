/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:04:59 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/15 15:23:45 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main()
{
	std::list<int> lst1;
	std::list<int>	lst2;

	lst1.push_back(1);
	lst1.push_back(2);
	lst1.push_back(3);
	lst1.push_back(4);
	lst1.push_back(5);
	try
	{
		std::cout << *easyfind(lst1, 3) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Not found" << std::endl;
	}
}
