#include "Marine.class.hpp"
#include "Unit.class.hpp"

static int _cid = 0;

Marine::Marine(void) : _index(0), _type("Marine"), _Xpos(0), _Ypos(0), _dps(6) \
					   , _Hp(40), _Mhp(40) {
	
	this->_index = _cid; 
	_cid = _cid + 1;
	std::cout << "[CREATED] Unit #" << this->_index << ": " << \
		this->_type << " in " << this->_Xpos << "/" << \
		this->_Ypos << " with " << this->_Hp << "/" << \
		this->_Mhp << "HP damaging at " << this->_dps << "." << std::endl;
	std::cout << "Unit #" << this->_index <<" You want a piece of me, boy ?" << std::endl;
	return;
}

Marine::Marine(Marine const & newunit) : Unit() {
	
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
	std::cout << "Unit #" << this->_index <<" You want a piece of me, boy ?" << std::endl;
	return;
}

Marine::Marine(int xpos, int ypos) {
	
	this->_index = _cid;
	_cid = _cid + 1;
	this->_type = "Marine";
	this->_Xpos = xpos;
	this->_Ypos = ypos;
	this->_dps = 6;
	this->_Hp = 40;
	this->_Mhp = 40;
	std::cout << "[CREATED] Unit #" << this->_index << ": " << \
		this->_type << " in " << this->_Xpos << "/" << \
		this->_Ypos << " with " << this->_Hp << "/" << \
		this->_Mhp << "HP damaging at " << this->_dps << "." << std::endl;
	std::cout << "Unit #" << this->_index <<"You want a piece of me, boy ?" << std::endl;

	return;
}

Marine::~Marine(void) {

	std::cout << "[DESTRUCTED] Unit #" << _index << ": " << \
		_type << " in " << _Xpos << "/" << _Ypos << " with " << \
		_Hp << "/" << _Mhp << "HP damaging at " << _dps << "." << std::endl;
	return;
}

void	Marine::die(void) {

	if (this->_Hp > 0)
		this->_Hp = 0;
	std::cout << "Unit #" << this->_index << " (" << this->_type << \
		") died." << std::endl;
	std::cout << "Unit #" << this->_index << ": Aaaargh..." << std::endl;
}

void	Marine::move(int x, int y) {
	
	std::cout << "Unit #" << this->_index << " (" << this->_type << \
		") is moving from " << this->_Xpos << "/" << this->_Ypos << \
		" to " << x << "/" << y << "." << std::endl;
	this->_Xpos = x;
	this->_Ypos = y;
	std::cout << "Unit #" << this->_index << ": Rock'n'roll !!!" << std::endl; 
}

void	Marine::attack(Marine & target) const {

	if (this->_Hp > 0)
	{
		std::cout << "Unit #" << this->_index << " (" << this->_type << \
			") damaged unit #" << target.getIndex() << " (" << \
			target.getType() << ")." << std::endl;
		target -= this->_dps;
	}
}

void	Marine::stimpack(void) {
	
	this->_dps = this->_dps * 2;
	this->_Hp = this->_Hp - 10;
	if (this->_Hp < 1)
		this->_Hp = 1;
	std::cout << "Unit #" << this->_index << ": Ho yeah..." << std::endl;
}

int		Marine::getIndex(void) const {

	return (this->_index);
}

std::string const & Marine::getType(void) const {

	return (this->_type);
}

int		Marine::getX(void) const {

	return (this->_Xpos);
}

int		Marine::getY(void) const {

	return (this->_Ypos);
}

int		Marine::getDam(void) const {

	return (this->_dps);
}

int		Marine::getCHP(void) const {
	
	return (this->_Hp);
}

int		Marine::getMHP(void) const {

	return (this->_Mhp);
}

Marine &		Marine::operator=(Marine const & rhs) {
	
	this->_type = rhs.getType();
	this->_Xpos = rhs.getX();
	this->_Ypos = rhs.getY();
	this->_Hp = rhs.getCHP();
	this->_Mhp = rhs.getMHP();
	this->_dps = rhs.getDam();
	return (*this);
}

int			operator+=(Marine const & rhs, int heal) {

	int 	chp;

	chp = rhs.getCHP() + heal;
	if (chp > rhs.getMHP())
		chp = rhs.getMHP();
	return (chp);

}

void		Marine::setCHP(int health) {

	this->_Hp = health;
}

int			operator-=(Marine & rhs, int hit) {
	
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

std::ostream & 	operator<<(std::ostream & o, Marine const & rhs) {


	o << "Unit #" << rhs.getIndex() << ": " << \
		rhs.getType() << " in " << rhs.getX() << "/" << \
		rhs.getY() << " with " << rhs.getCHP() << "/" << \
		rhs.getMHP() << "HP damaging at " << rhs.getDam() << ".";
	return o;
}
