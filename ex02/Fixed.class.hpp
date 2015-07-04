/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 14:47:39 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/08 00:37:18 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>

class Fixed {

	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const & src);
		~Fixed(void);
		
		Fixed &	operator=( Fixed const & rhs);
		Fixed  	operator+( Fixed const & rhs) const;
		Fixed  	operator-( Fixed const & rhs) const;
		Fixed  	operator*( Fixed const & rhs) const;
		Fixed  	operator/( Fixed const & rhs) const;

		bool	operator>( Fixed const & rhs) const;
		bool	operator<( Fixed const & rhs) const;
		bool	operator>=( Fixed const & rhs) const;
		bool	operator<=( Fixed const & rhs) const;
		bool	operator==( Fixed const & rhs) const;
		bool	operator!=( Fixed const & rhs) const;
		
		Fixed 	operator++(int const n);
		Fixed &	operator++( void );
		Fixed   operator--(int const n);
		Fixed & operator--( void );

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		static const Fixed &	min(Fixed & val1, Fixed & val2);
		static const Fixed &	min(Fixed const & val1, Fixed const & val2);
		static const Fixed &	max(Fixed & val1, Fixed & val2);
		static const Fixed &	max(Fixed const & val1, Fixed const & val2);
	
	private:
		int			_fpv;
		int const	_nbrfb;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
