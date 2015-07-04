/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:40:49 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/09 14:44:36 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
#include <iostream>

class	Peon : public Victim {
	
	protected:
		Peon(void);

	public:
		Peon(Peon const &);
		Peon(std::string name);
		~Peon(void);
	
		Peon &	operator=(Peon const & rhs);	
		void	getPolymorphed(void) const;
		std::string	getName(void) const;

	protected:
		std::string	_name;
};

std::ostream & operator<<(std::ostream & o, Peon const & rhs);

#endif
