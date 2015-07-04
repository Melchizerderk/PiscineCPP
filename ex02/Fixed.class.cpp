/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 14:47:22 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/15 18:54:49 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _fpv(0), _nbrfb(8) {

	return;
}

Fixed::Fixed(int const n) : _nbrfb(8) {
	
	this->setRawBits(roundf(n * 256));

	return;
}

Fixed::Fixed(float const n) : _nbrfb(8) {

	this->setRawBits(roundf(n * 256));

	return;
}

Fixed::~Fixed(void) {

	
	return;
}

Fixed::Fixed(Fixed const & src) : _nbrfb(8) {
	
	*this = src;

	return;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	
	this->_fpv = rhs.getRawBits();

	return *this;
}

Fixed	Fixed::operator+(Fixed const & rhs) const {
	
	return Fixed((this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs) const {
	
	return Fixed((this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & rhs) const {
	
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const & rhs) const {
	
	if (rhs.getRawBits() == 0)
	{
		std::cout << "Don't divide by 0 scrub" << std::endl;
		return Fixed(0);
	}
	return Fixed((this->toFloat() / rhs.toFloat()));
}

Fixed  Fixed::operator++(int const n) {
	
	(void )n;
	Fixed fix(*this);
	std::cout << "non ref" << std::endl;
	this->setRawBits(this->getRawBits() + 1);
	return fix;
}

Fixed & Fixed::operator++( void ) {
	
	std::cout << "ref" << std::endl;
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed  Fixed::operator--(int const n) {
	
	(void) n;
	Fixed fix(*this);	
	this->setRawBits(this->getRawBits() - 1);
	return fix;
}

Fixed &	Fixed::operator--( void ) {
	
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

const Fixed &	Fixed::min(Fixed & val1, Fixed & val2) {
	
	if (val1 <= val2)
		return (val1);
	else
		return (val2);
}

const Fixed & Fixed::min(Fixed const & val1, Fixed const & val2) {

	if (val1 <= val2)
		return (val1);
	else
		return (val2);
}

const Fixed & Fixed::max(Fixed & val1, Fixed & val2) {
	
	if (val1 >= val2)
		return (val1);
	else
		return (val2);
}

const Fixed & Fixed::max(Fixed const & val1, Fixed const & val2) {
	
	if (val1 >= val2)
		return (val1);
	else
		return (val2);
}

bool	Fixed::operator>(Fixed const & rhs) const {
	
	return (this->_fpv > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const {
	
	return (this->_fpv < rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const & rhs) const {
	
	return (this->_fpv >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const & rhs) const {
	
	return (this->_fpv <= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const & rhs) const {
	
	return (this->_fpv == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs) const {

	return (this->_fpv != rhs.getRawBits());
}

int		Fixed::getRawBits(void) const {
	
	return (this->_fpv);
}

void	Fixed::setRawBits(int const raw) {
	this->_fpv = raw;
}

int		Fixed::toInt(void) const {
	
	return (this->_fpv / 256.0f);
}

float	Fixed::toFloat(void) const {

	return (this->_fpv / (256.0f));
}

std::ostream & operator<< (std::ostream & o, Fixed const & rhs ) {

	o << rhs.toFloat();
	return o;
}
