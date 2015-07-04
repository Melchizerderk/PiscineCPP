/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:04:18 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/15 15:17:16 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <list>
#include <map>
#include <vector>

template<typename T>

typename T::const_iterator easyfind(T a, int n)
{
	typename T::const_iterator it;
	typename T::const_iterator ite = a.end();

	for (it = a.begin(); it != ite; it++)
	{
		if (*it == n)
			return it;
	}
	throw std::exception();
}

#endif
