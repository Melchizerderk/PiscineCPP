/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:45:53 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/12 22:32:19 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("default"), _signgrade(0), _execgrade(0){

	return;
}

Form::Form(std::string name, bool isign, int signgrd, int execgrd) : \
		_name(name), _signgrade(signgrd), _execgrade(execgrd)
{
	try
	{
		if (execgrd < 1 || signgrd < 1)
		{
			throw GradeTooHighException();
		}
		else if (execgrd > 150 || signgrd > 150)
		{
			throw GradeTooLowException();
		}
		else
			this->_issigned = isign;
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

Form::Form(Form const & src) : _name(src.getName()), _signgrade(src.getSigngrade()), \
								   _execgrade(src.getExecgrade()) {
	this->_issigned = src.getIssigned();
	return;
}

Form::~Form(void) {

	return;
}

Form & Form::operator=(Form const & rhs) {

	*this = rhs;
	return *this;
}

std::string const Form::getName() const {

	return this->_name;
}

bool	Form::getIssigned() const {

	return this->_issigned;
}

int		Form::getSigngrade() const {

	return this->_signgrade;
}

int		Form::getExecgrade() const {

	return this->_execgrade;
}

int			Form::beSigned(Bureaucrat & src) {

	if (src.getGrade() > this->_signgrade)
	{
		return 0;
	}
	else 
	{
		this->_issigned = true;
		return 1;
	}
}

Form::GradeTooHighException::GradeTooHighException(void) throw() {

	return;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) throw() {
	
	(void)src;
	return;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {

	return;
}

const char*	Form::GradeTooHighException::what() const throw() {

	return ("Grade too high");
}

const char*	Form::GradeTooLowException::what() const throw() {

	return ("Grade too low");
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & rhs) throw() {

	*this = rhs;
	return *this;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & rhs) throw() {

	*this = rhs;
	return *this;
}

Form::GradeTooLowException::GradeTooLowException(void) throw() {

	return;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) throw() {
	
	(void)src;
	return;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {

	return;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {

	o << "Form : " << rhs.getName() << " is signed : " << rhs.getIssigned() << \
		" need a sign grade of : " << rhs.getSigngrade() << " and an execution level of : " \
		<< rhs.getExecgrade();
	return o;
}
