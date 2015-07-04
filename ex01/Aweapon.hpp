/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:06:19 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/09 15:46:09 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

class Aweapon {

	private:
		Aweapon(void);

	public:
		Aweapon(std::string const & name, int apcost, int damage);
		Aweapon(Aweapon const &);
		virtual ~Aweapon(void);

		Aweapon & 		operator=(Aweapon const & rhs);
		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;

	protected:
		std::string _name;
		int			_Hp;
		int			_Dmg;
		int			_apc;
}

#endif
