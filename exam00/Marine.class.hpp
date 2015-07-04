#ifndef MARINE_CLASS_HPP
# define MARINE_CLASS_HPP

#include <iostream>
#include "Unit.class.hpp"

class Marine : public Unit {

	public:
		Marine(void);
		Marine(Marine const &);
		Marine(int, int);
		~Marine(void);

		Marine & operator=(Marine const &);
		void	die(void);
		void	move(int x, int y);
		void	stimpack(void);
		void	attack(Marine & target) const;

		int		getIndex(void) const;
		std::string const & getType(void) const;
		int					getX(void) const;
		int					getY(void) const;
		int					getDam(void) const;
		int					getCHP(void) const;
		int					getMHP(void) const;
		void				setCHP(int);

	protected:
		int		_index;
		std::string	_type;
		int		_Xpos;
		int		_Ypos;
		int		_dps;
		int		_Hp;
		int		_Mhp;
};

std::ostream & operator<<(std::ostream & o, Marine const & rhs);
int				operator-=(Marine & rhs, int);
int				operator+=(Marine const & rhs, int);

#endif
