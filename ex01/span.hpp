/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:56:11 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/15 18:09:51 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {

	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const &);
		~Span(void);
		
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

		Span & operator=(Span const &);

	protected:
		std::vector<int> _store;
		int			_size;
		static int 	_it;
};

#endif
