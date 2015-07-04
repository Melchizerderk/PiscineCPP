/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 16:05:39 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/12 22:12:06 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main () {

/*	Bureaucrat nr1("B1", 4);
	Bureaucrat nr2("B2", 120);
	Bureaucrat nr3("B3", 0);
	Bureaucrat nr4("B4", 200);
	Bureaucrat nr5("B5", 1);
	Bureaucrat nr6("B6", 150);
	
	Form	fr1("F1", false, 10, 50);
	Form	fr2("F2", false, 110, 80);
	Form	fr3("F3", false, 1, 1);

	nr1.signForm(fr1);
	nr2.signForm(fr1);
	nr6.signForm(fr1);
	nr1.signForm(fr2);

	std::cout << fr1 << std::endl;
	nr1.Gradeinc();
	nr2.Gradedec();
	nr5.Gradeinc();
	nr6.Gradedec();

	std::cout << nr1 << std::endl;
	std::cout << nr2 << std::endl;
	std::cout << nr5 << std::endl;
	std::cout << nr6 << std::endl;*/

	ShrubberyCreationForm("test");
	return 0;
}
