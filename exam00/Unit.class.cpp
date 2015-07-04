#include "Unit.class.hpp"

static int _cid = 0;

Unit::Unit(void) : _index(0), _type("Unit"), _Xpos(0), _Ypos(0), _dps(0) \
					   , _Hp(0), _Mhp(0) {
						   
	_cid = _cid + 1;
	std::cout << "[CREATED] Unit #" << this->_index << ": " << \
		this->_type << " in " << this->_Xpos << "/" << \
		this->_Ypos << " with " << this->_Hp << "/" << \
		this->_Mhp << "HP damaging at " << this->_dps << "." << std::endl;
	return;
}

Unit::Unit(Unit const & newunit) {
	
	this->_index = _cid;
	_cid = _cid + 1;
	this->_type = newunit.getType();
	this->_Xpos = newunit.getX();
	this->_Ypos = newunit.getY();
	this->_dps = newunit.getDam();
	this->_Hp = newunit.getCHP();
	this->_Mhp = newunit.getMHP();
	std::cout << "[CREATED] Unit #" << this->_index << ": " << \
		this->_type << " in " << this->_Xpos << "/" << \
		this->_Ypos << " with " << this->_Hp << "/" << \
		this->_Mhp << "HP damaging at " << this->_dps << "." << std::endl;
	return;
}

Unit::Unit(std::string type, int xpos, int ypos, int dps, int hp, int mhp) {
	
	this->_index = _cid;
	_cid = _cid + 1;
	this->_type = type;
	this->_Xpos = xpos;
	this->_Ypos = ypos;
	this->_dps = dps;
	this->_Hp = hp;
	this->_Mhp = mhp;
	std::cout << "[CREATED] Unit #" << this->_index << ": " << \
		this->_type << " in " << this->_Xpos << "/" << \
		this->_Ypos << " with " << this->_Hp << "/" << \
		this->_Mhp << "HP damaging at " << this->_dps << "." << std::endl;

	return;
}

Unit::~Unit(void) {

	std::cout << "[DESTRUCTED] Unit #" << _index << ": " << \
		_type << " in " << _Xpos << "/" << _Ypos << " with " << \
		_Hp << "/" << _Mhp << "HP damaging at " << _dps << "." << std::endl;
	return;
}

void	Unit::die(void) {

	if (this->_Hp > 0)
		this->_Hp = 0;
	std::cout << "Unit #" << this->_index << " (" << this->_type << \
		") died." << std::endl;
}

void	Unit::move(int x, int y) {
	
	std::cout << "Unit #" << this->_index << " (" << this->_type << \
		") is moving from " << this->_Xpos << "/" << this->_Ypos << \
		" to " << x << "/" << y << "." << std::endl;
	this->_Xpos = x;
	this->_Ypos = y;
}

void	Unit::attack(Unit & target) const {

	if (this->_Hp > 0)
	{
		std::cout << "Unit #" << this->_index << " (" << this->_type << \
			") damaged unit #" << target.getIndex() << " (" << \
			target.getType() << ")." << std::endl;
		target -= this->_dps;
	}
}

int		Unit::getIndex(void) const {

	return (this->_index);
}

std::string const & Unit::getType(void) const {

	return (this->_type);
}

int		Unit::getX(void) const {

	return (this->_Xpos);
}

int		Unit::getY(void) const {

	return (this->_Ypos);
}

int		Unit::getDam(void) const {

	return (this->_dps);
}

int		Unit::getCHP(void) const {
	
	return (this->_Hp);
}

int		Unit::getMHP(void) const {

	return (this->_Mhp);
}

Unit &			Unit::operator=(Unit const & rhs) {
	
	this->_type = rhs.getType();
	this->_Xpos = rhs.getX();
	this->_Ypos = rhs.getY();
	this->_Hp = rhs.getCHP();
	this->_Mhp = rhs.getMHP();
	this->_dps = rhs.getDam();
	return (*this);
}

int			operator+=(Unit const & rhs, int heal) {

	int 	chp;

	chp = rhs.getCHP() + heal;
	if (chp > rhs.getMHP())
		chp = rhs.getMHP();
	return (chp);

}

void		Unit::setCHP(int health) {

	this->_Hp = health;
}

int			operator-=(Unit & rhs, int hit) {
	
	int		chp;
	
	chp = rhs.getCHP() - hit;
	if (chp <= 0)
	{
		chp = 0;
		rhs.die();
	}
	rhs.setCHP(chp);
	return (chp);
}

std::ostream & 	operator<<(std::ostream & o, Unit const & rhs) {


	o << "Unit #" << rhs.getIndex() << ": " << \
		rhs.getType() << " in " << rhs.getX() << "/" << \
		rhs.getY() << " with " << rhs.getCHP() << "/" << \
		rhs.getMHP() << "HP damaging at " << rhs.getDam() << ".";
	return o;
}
