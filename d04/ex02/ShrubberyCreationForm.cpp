/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 21:34:07 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/12 22:29:58 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) {

	std::string	newstr;
	std::string	buf;

	newstr = target + "_shrubbery";
	std::ifstream ifs("shrubbery.sample");
	std::ofstream newfile("test");
	while (getline(ifs, buf))
	{
		newfile << buf;
	}
	this->_target = target;
	return ;
}

/*ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form() {
	
	void(src);
	return ;
}*/

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

	return;
}
