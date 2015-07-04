/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 19:43:12 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/06 21:25:41 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <string>

Human::Human(void) {
	return;
}

Human::~Human(void) {
	return;
}

const	Brain& Human::getBrain(void) {
	return (this->attr);
}

std::string Human::identify(void) {
	return (attr.identify());
}
