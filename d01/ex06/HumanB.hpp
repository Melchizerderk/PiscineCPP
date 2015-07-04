/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 18:52:17 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/03 19:27:29 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>

class Weapon;

class HumanB {

	public:

		HumanB(std::string);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon);

		Weapon	*_tool;
		std::string	_name;
};

#endif
