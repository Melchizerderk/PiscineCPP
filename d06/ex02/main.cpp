/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 21:03:26 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/13 22:04:15 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <exception>

class Base				{public : virtual ~Base(void) {}};
class A : public Base{};
class B : public Base{};
class C : public Base{};

Base	*generate(void)
{
	int	d;
	
	d = rand() % 2;
	if (d == 1)
	{
		A * Ins = new A;
		return (Ins);
	}
	else if (d == 2)
	{
		B *Ins = new B;
		return (Ins);
	}
	else
	{
		C *Ins = new C;
		return (Ins);
	}
}

void	identify_from_pointer(Base *p)
{
	A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	else if	(b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base & p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		if (&a)
		{
			std::cout << "A" << std::endl;
		}
		else
		{
			throw std::exception();
		}

	}
	catch (std::exception e)
	{}
	try 
	{
		B & b = dynamic_cast<B &>(p);
		if (&b)
		{
			std::cout << "B" << std::endl;
		}
		else
		{
			throw std::exception();
		}
	}
	catch (std::exception e)
	{}
	try
	{
		C & c = dynamic_cast<C &>(p);
		if (&c)
		{
			std::cout << "C" << std::endl;
		}
		else
		{
			throw std::exception();
		}
	}
	catch (std::exception e)
	{}
}

int main()
{
	srand(time(NULL));
	identify_from_pointer(generate());
	identify_from_reference((*generate()));

	return 0;
}
