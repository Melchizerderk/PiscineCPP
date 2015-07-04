/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 14:07:29 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/13 18:48:11 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_CLASS_HPP
# define CONVERSION_CLASS_HPP

#include <iostream>

class Conversion {

	public:
		Conversion(void);
		Conversion(Conversion const &);
		Conversion(char *);
		virtual ~Conversion(void);

		Conversion & operator=(Conversion const &);
		char		toChar(int);
		char		toChar(float);
		char		toChar(double);
		int			toInt(char);
		int			toInt(float);
		int			toInt(double);
		float		toFloat(double);
		float		toFloat(int);
		float		toFloat(char);
		double		toDouble(float);
		double		toDouble(char);
		double		toDouble(int);

	protected:
		char*	_value;
};

#endif
