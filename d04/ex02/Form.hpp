/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 17:46:06 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/12 22:14:54 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {

	protected:
		Form(void);

	public:
		Form(std::string const, bool, int, int);
		Form(Form const &);
		~Form(void);

		Form & operator=(Form const &);
		
		std::string const	getName() const;
		bool				getIssigned() const;
		int					getSigngrade() const;
		int					getExecgrade() const;
		int					beSigned(Bureaucrat &);

	public : class GradeTooHighException : public std::exception {
	
		public:
			GradeTooHighException(void) throw();
			GradeTooHighException(GradeTooHighException const &) throw();
			~GradeTooHighException(void) throw();

			GradeTooHighException & operator=(GradeTooHighException const &) throw();
			virtual const char* what() const throw ();
	};

	public : class GradeTooLowException : public std::exception {
	
		public:
			GradeTooLowException(void) throw();
			GradeTooLowException(GradeTooLowException const &) throw();
			~GradeTooLowException(void) throw();

			GradeTooLowException & operator=(GradeTooLowException const &) throw();
			virtual const char* what() const throw ();
	};

	private:
		std::string const 	_name;
		bool				_issigned;
		int	const			_signgrade;
		int	const			_execgrade;
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

class Bureaucrat;

#endif
