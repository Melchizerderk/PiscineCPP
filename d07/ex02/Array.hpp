/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 16:24:12 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/14 18:45:29 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>

class Array {

	public:
		Array(void) { this->_ptr = new T[0]; this->_size = 0; };
		Array(unsigned int n) {this->_ptr = new T[n]; this->_size = n;};
		Array(Array const & src) {*this = src;};
		Array & operator=(T & rhs) {
			delete []this->_ptr; 
			this->_ptr = new T [rhs.size()];	
			return *this;
		};

		T	& 	operator[](unsigned int n) {
			if (n > this->_size)
			{
				throw std::exception();
			}
			return this->_ptr[n];
		};

		int		size(T ptr) {return this->_size;};
	
	protected:
		T	*_ptr;
		int	_size;
};

#endif
