/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 15:39:09 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/14 16:23:38 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void affiche(T & a)
{
	std::cout << "function applied : "<< a << std::endl;
}

template<typename T>

void iter(T *ptr, int len, void (*f)(T & a))
{
	int		i;
	
	i = 0;
	while (i < len)
	{
		f(ptr[i]);
		i++;
	}
}


int main()
{
	char 	ptr[] = "Salut";
	int		n = 5;
	
	::iter<char>(ptr, n, &affiche);
	return 0;
}
