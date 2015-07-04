/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 18:45:16 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/06 21:27:59 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Brain.hpp"
#include <sstream>
#include <iostream>

Brain::Brain(void) {
	return;
}

Brain::~Brain(void) {
	return;
}

const std::string Brain::identify(void) const {
	
	std::ostringstream os;
	std::string	s;
   	
	os << this;

	s = os.str();
	return (s);
}
