/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:56:56 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/15 18:09:48 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	Span::_it = 0;

Span::Span(void) {

	this->_store = std::vector<int>();
	this->_size = 0;
}

Span::Span(unsigned int N) {

	this->_store = std::vector<int>(N);
	this->_size = N;
}

Span::Span(Span const & src) {

	*this = src;
	return;
}

Span::~Span(void) {

	return;
}

Span & Span::operator=(Span const & rhs) {

	*this = rhs;
	return *this;
}

void	Span::addNumber(int n) {
	
	try
	{
		if (_it < this->_size)
		{
			this->_store[_it] = n;
			_it++;
		}
	}
	catch (std::exception & e)
	{
		std::cout << "Storage is full" << std::endl;
	}
}

int		Span::shortestSpan() {

	int		i = 1;
	int		d;

	if (_it == 0 || _it == 1)
		throw std::exception();
	std::sort(this->_store.begin(), this->_store.end());
	d = this->_store.at(_it - 1);
	while (i < _it)
	{
		if (d > (this->_store[i] - this->_store[i - 1]))
			d = this->_store[i] - this->_store[i - 1];
		i++;
	}
	return (d);
}

int 	Span::longestSpan() {

	if (_it == 0 || _it == 1)
		throw std::exception();
	std::sort(this->_store.begin(), this->_store.end());
	return (this->_store[_it - 1] - this->_store[0]);
}
