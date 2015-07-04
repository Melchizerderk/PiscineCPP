/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 21:39:15 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/06 21:59:40 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <algorithm>

int	main()
{
	int				length;
	char			*buff;
	std::ifstream	ifs("testfile");
	std::ofstream	ofs("newfile.out");
	std::string		s1 = "a";
	std::string		s2 = "b";

	if (ifs)
	{
		ifs.seekg (0, ifs.end);
		length = ifs.tellg();
		ifs.seekg (0, ifs.beg);
		buff = new char [length];
		ifs.read (buff, length);
		std::replace (buff.begin(), buff.end(), s1, s2);	
		ofs << buff << std::endl;
	}
	ofs.close();
	ifs.close();
	return (0);
}
