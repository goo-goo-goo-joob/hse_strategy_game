#include "Pilot.h"



Pilot::Pilot()
{
	_name = "Pilot";
	_power = 85;
	_hp = 100;
	_speed = 5;//Параметр, описывающий, что пилота сложнее подбить
}


Pilot::~Pilot()
{
}

void Pilot::attac(Unit & enemy)//Пилот может атаковать любого
{
	if (_alive) {
		enemy.getDamage(_power);
		cout << _name << " damaged " << enemy._name << " by " << _power << endl;
	}
	else
		cout << _name << " failed to attac " << enemy._name << endl;
}

void Pilot::getDamage(int damage)
{
	if (_alive)
	{
		if (damage < 0) {
			_hp -= damage;//Лечить пилота
		}
		else {
			_hp -= damage / _speed;//Подбить пилота тяжелее
		}
		if (_hp >= 100) {
			_hp = 100;
		}
		_alive = _hp > 0;
	}
}

ostream & operator<<(ostream & os, const Pilot & pilot)
{
	os << pilot._name;
	if (pilot._alive) {
		os << "\tHP:" << pilot._hp << endl;
	}
	else {
		os << "\tDied" << endl;
	}
	os << "\tPower:" << pilot._power << endl;
	os << "\tSpeed:" << pilot._speed << endl;
	return os;
}
