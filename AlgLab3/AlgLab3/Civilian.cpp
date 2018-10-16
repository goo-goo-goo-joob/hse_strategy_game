#include "Civilian.h"



Civilian::Civilian()
{
	_name = "Citizen";
	_hp = 100;
}


Civilian::~Civilian()
{
}


void Civilian::getDamage(int damage)
{
	if (_alive)
	{
		_hp -= damage;
		if (_hp >= 100) {
			_hp = 100;
		}
		_alive = _hp > 0;
	}
}

ostream & operator<<(ostream & os, const Civilian & civil)
{
	os << civil._name;
	if (civil._alive) {
		os << "\tHP:" << civil._hp << endl;
	}
	else {
		os << "\tDied" << endl;
	}
	return os;
}
