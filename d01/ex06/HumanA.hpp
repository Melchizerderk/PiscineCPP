/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 18:49:05 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/03 19:20:54 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>

class Weapon;

class HumanA {

	public:

		HumanA(std::string, Weapon &);
		~HumanA(void);

		void attack(void);

		std::string	_name;
		Weapon	& _tool;
};

#endif
