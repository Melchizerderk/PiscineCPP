/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 14:47:22 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/08 16:57:48 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _fpv(0), _nbrfb(8) {

	std::cout << "Default constructor called" << std::endl;
	
	return;
}

Fixed::Fixed(int const n) : _nbrfb(8) {
	
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(roundf(n * pow(2, this->_nbrfb)));

	return;
}

Fixed::Fixed(float const n) : _nbrfb(8) {

	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(n * (pow(2, this->_nbrfb))));

	return;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
	
	return;
}

Fixed::Fixed(Fixed const & src) : _nbrfb(8) {
	
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	
	std::cout << "Assignation operator called" << std::endl;
	this->_fpv = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits(void) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpv);
}

void	Fixed::setRawBits(int const raw) {
	this->_fpv = raw;
}

std::ostream & operator<< (std::ostream & o, Fixed const & rhs ) {

	o << rhs.getRawBits() / pow(2, 8);
	return o;
}

int		Fixed::toInt(void) const {
	
	return (this->_fpv / (pow(2, this->_nbrfb)));
}

float	Fixed::toFloat(void) const {
	return (this->_fpv / (pow(2, this->_nbrfb)));
}
