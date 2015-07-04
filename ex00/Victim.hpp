/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:40:06 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/09 13:46:34 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim {
	
	protected:
		Victim(void);

	public:
		Victim(Victim const &);
		Victim(std::string name);
		~Victim(void);

		Victim & 		operator=(Victim const & rhs);
		void			announce(void);
		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;

	protected:
		std::string _name;
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif
