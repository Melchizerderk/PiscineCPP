/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 18:11:45 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/15 20:59:34 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>

class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {return;}
		MutantStack(MutantStack const & src) : std::stack<T>(src) {return;}
		~MutantStack(void) {return;}

		MutantStack & operator=(MutantStack const & src) {
			std::stack<T>::operator=(src); 
			return *this;
		}

		class iterator
		{
			private : 
				size_t			_current;
				MutantStack<T>	_stack;
				iterator(void)	{return;}

			public:
				iterator(MutantStack<T> & src) : _current(0), _stack(src) {return;}
				iterator(size_t size, MutantStack<T> stack) : _current(size), _stack(stack) {return;}
				~iterator(void) {return;}

				iterator & operator++() {
					this->_current++;
					return (*this);
				}

				iterator 	operator++(int) {
					iterator tmp(*this);
					++(this->_current);
					return tmp;
				}

				iterator &	operator--() {
					this->_current--;
					return (*this);
				}

				iterator	operator--(int) {
					iterator tmp(*this);
					--(this->_current);
					return tmp;
				}

				T	operator*() {
					return *(&this->_stack.top() - this->_current);
				}

				bool	operator!=(iterator const & src) {
					if (this->_current == src._current)
						return false;
					else
						return true;
				}
		};

		iterator begin() {return iterator(0, *this);}
		iterator end() {return (iterator(this->size(), *this));}
};

#endif
