/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 15:10:45 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/12 20:58:31 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	
	try
	{
		if (grade < 1)
		{
			throw GradeTooHighException();
		}
		else if (grade > 150)
		{
			throw GradeTooLowException();
		}
		else
		{
			this->_grade = grade;
		}
	}
	catch (GradeTooLowException & e)
	{
		std::cout << name << " : " << e.what() << std::endl;
	}
	catch (GradeTooHighException & e)
	{
		std::cout << name << " : " << e.what() << std::endl;
	}
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()) {

	this->_grade = src.getGrade();

	return;
}

Bureaucrat::~Bureaucrat(void) {

	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {

	*this = rhs;
	return *this;
}

std::string	const Bureaucrat::getName(void) const {

	return this->_name;
}

int			Bureaucrat::getGrade(void) const {

	return this->_grade;
}

void		Bureaucrat::signForm(Form  & src) {

	try
	{
		if (src.beSigned(*this) == 0)
		{
			throw GradeTooLowException();
		}
		else
		{
			std::cout << this->_name << " signs " << src.getName() << std::endl;
		}
	}
	catch (GradeTooLowException & e)
	{
		std::cout << this->_name << " cannot sign " << src.getName() << \
			" because " << e.what() << std::endl;
	}
}

void		Bureaucrat::Gradeinc(void) {

	try 
	{
		if ((this->_grade - 1) < 1)
		{
			throw GradeTooHighException();
		}
		else
			this->_grade -= 1;
	}
	catch (GradeTooHighException & e) {
		std::cout << this->_name << " : " << e.what() << std::endl;
	}
}

void		Bureaucrat::Gradedec() {
	try 
	{
		if ((this->_grade + 1 )> 150)
		{
			throw GradeTooLowException();
		}
		else
			this->_grade += 1;
	}
	catch (GradeTooLowException & e) {
		std::cout << this->_name << " : " << e.what() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) throw() {

	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) throw () {
	(void)src;
	return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {

	return;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {

	return ("Grade too high");
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs) throw() {

	*this = rhs;
	return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) throw() {

	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) throw() {

	(void)src;
	return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw () {

	return;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

	return ("Grade too low");
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs) throw() {

	*this = rhs;
	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	
	return o;
}
