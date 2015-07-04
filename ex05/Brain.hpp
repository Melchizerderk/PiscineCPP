/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 18:43:12 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/06 21:29:01 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain {

	public:

		Brain(void);
		~Brain(void);

		int			synaps;
		int			cortex;
		std::string thought;

		const	std::string identify(void) const;
};

#endif
