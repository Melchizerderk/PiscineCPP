/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 14:56:17 by bcrespin          #+#    #+#             */
/*   Updated: 2015/01/12 20:28:53 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;

class Bureaucrat {

	private:
		Bureaucrat(void);
	public:
		Bureaucrat(std::string const name, int);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const &);
	
		std::string const	getName() const;
		int					getGrade() const;	
		void				Gradeinc();
		void				Gradedec();
		void				signForm(Form &);

	public : class GradeTooHighException : public std::exception {
		
		public:
			GradeTooHighException(void) throw();
			GradeTooHighException(GradeTooHighException const &) throw();
			~GradeTooHighException(void) throw ();
			
			GradeTooHighException & operator=(GradeTooHighException const &) throw();
			virtual const char *what() const throw();
	};
	
	public : class GradeTooLowException : public std::exception {
		
		public:
			GradeTooLowException(void) throw();
			GradeTooLowException(GradeTooLowException const &) throw();
			~GradeTooLowException(void) throw();
			
			GradeTooLowException & operator=(GradeTooLowException const &) throw();
			virtual const char *what() const throw();
	 };

	protected:
		std::string const	_name;
		int					_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

class Form;

#endif
