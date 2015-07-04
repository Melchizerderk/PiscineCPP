/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:59:48 by bcrespin          #+#    #+#             */
/*   Updated: 2015/04/01 12:13:09 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <string>

class Pony {

	public:

		Pony( void );
		~Pony( void );

		int			age;
		std::string	name;
		int			weight;
		std::string	color;
		float		height;
		
		void	ponyOnTheStack( void );
		void	ponyOnTheHeap( Pony * );
};

#endif
