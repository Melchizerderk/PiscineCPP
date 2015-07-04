/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 14:59:49 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/13 18:48:15 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.class.hpp"

Conversion::Conversion(void) {

	return;
}

Conversion::Conversion(char* value) {

	this->_value = value;
	return;
}

Conversion::Conversion(Conversion const & src) {

	return;
}

Conversion::~Conversion(void) {

	return;
}

Conversion & Conversion::operator=(Conversion const & src) {

	*this = src;
	return *this;
}

char	Conversion::toChar(int v) {

	return static_cast<char>(v);
}

char	Conversion::toChar(float v) {
	
	return static_cast<char>(v);
}

char	Conversion::toChar(double v) {
	
	return static_cast<char>(v);
}

int		Conversion::toInt(char v) {
	
	return static_cast<int>(v);
}

int		Conversion::toInt(float v) {
	
	return static_cast<int>(v);
}

int		Conversion::toInt(double v) {
	
	return static_cast<int>(v);
}

float	Conversion::toFloat(char v) {

	return static_cast<float>(v);
}

float	Conversion::toFloat(int v) {

	return static_cast<float>(v);
}

float Conversion::toFloat(double v) {

	return static_cast<float>(v);
}

double Conversion::toDouble(int v) {

	return static_cast<double>(v);
}

double Conversion::toDouble(char v) {

	return static_cast<double>(v);
}

double Conversion::toDouble(float v) {

	return static_cast<double>(v);
}
