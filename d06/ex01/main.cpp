/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 16:53:41 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/13 20:52:37 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstring>
#include <iostream>
#include <time.h>
#include <cstdlib>

struct dibs {

	char data[20];
};

struct Data {

	std::string s1;
	std::string s2;
	int			n;
};

void	*serialize(void) 
{
	int		i = 0;
	srand(time(NULL));

	char		alphnum[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMONPQRSTUVWXYZ";	
	dibs *tab = new dibs;
	
	while (i < 20)
	{
		tab->data[i] = alphnum[rand() % 62];
		i++;
	}

	return (reinterpret_cast<void *>(tab));
}

Data	*deserialize(void *raw)
{
	struct Data *Dat = new Data;
	char		tmp1[9] = {0};
	char		tmp2[9] = {0};
	char		*strtmp = reinterpret_cast<char*>(raw);
	int			i = 0;

	while (i < 8)
	{
		tmp1[i] = strtmp[i];
		i++;
	}
	i = 12;
	while (i < 20)
	{
		tmp2[i - 12] = strtmp[i];
		i++;
	}
	Dat->s1 = std::string(tmp1);
	Dat->s2 = std::string(tmp2);
	Dat->n = *((reinterpret_cast<int*>(strtmp)) + 2);
	return Dat;
}

int main()
{
	struct Data	*Deser;
	
	Deser = deserialize(serialize());

	std::cout << Deser->n << std::endl;
	std::cout << Deser->s1 << std::endl;
	std::cout << Deser->s2 << std::endl;

	return (0);
}
