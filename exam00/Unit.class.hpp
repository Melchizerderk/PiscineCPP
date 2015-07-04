#ifndef UNIT_CLASS_HPP
# define UNIT_CLASS_HPP

#include <string>
#include <iostream>

class Unit {

	public:
		Unit(void);
		Unit(std::string, int, int, int, int, int);
		Unit(Unit const &);
		virtual	~Unit(void);

		Unit &		operator=(Unit const &);
		virtual void		die(void);
		virtual void		move(int x, int y);
		void		attack(Unit & target) const;

		int					getIndex(void) const;
		std::string const & getType(void) const;
		int					getX(void) const;
		int					getY(void) const;
		int					getDam(void) const;
		int					getCHP(void) const;
		int					getMHP(void) const;
		void				setCHP(int);

	protected:
		int			_index;
		std::string	_type;
		int			_Xpos;
		int			_Ypos;
		int			_dps;
		int			_Hp;
		int			_Mhp;
};

std::ostream & operator<<(std::ostream & o, Unit const & rhs);
int				operator-=(Unit & rhs, int);
int				operator+=(Unit const & rhs, int);

#endif
