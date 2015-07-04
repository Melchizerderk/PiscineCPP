/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 19:40:08 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/06 21:25:36 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"
#include <string>

class Human {

	public:

		Human(void);
		~Human(void);

		const	Brain	attr;
		std::string	identify(void);
		const	Brain&	getBrain(void);

};

#endif
