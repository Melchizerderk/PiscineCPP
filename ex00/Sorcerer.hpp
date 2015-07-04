/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:39:19 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/09 14:08:25 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer {

	protected:
		Sorcerer(void);

	public:
		Sorcerer(Sorcerer const &);
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);

		Sorcerer & 	operator=(Sorcerer const & rhs);
		void		announce(void);
		std::string getName(void) const;
		std::string	getTitle(void) const;
		void		polymorph(Victim const &);

	protected:
		std::string _title;
		std::string	_name;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
