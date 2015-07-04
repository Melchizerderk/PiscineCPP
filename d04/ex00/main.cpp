/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 16:05:39 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/12 17:45:04 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main () {

	Bureaucrat nr1("B1", 4);
	Bureaucrat nr2("B2", 120);
	Bureaucrat nr3("B3", 0);
	Bureaucrat nr4("B4", 200);
	Bureaucrat nr5("B5", 1);
	Bureaucrat nr6("B6", 150);

	nr1.Gradeinc();
	nr2.Gradedec();
	nr5.Gradeinc();
	nr6.Gradedec();

	std::cout << nr1 << std::endl;
	std::cout << nr2 << std::endl;
	std::cout << nr5 << std::endl;
	std::cout << nr6 << std::endl;

	return 0;
}
