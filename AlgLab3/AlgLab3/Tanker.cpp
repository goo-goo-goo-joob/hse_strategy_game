#include "Tanker.h"



void Tanker::getDamage(int damage)
{
	if (_alive)
	{
		if (damage < 0) {
			_hp -= damage;//Лечить
		}
		else {
			_hp -= damage / _armor;//Ранить тяжелее
		}
		if (_hp >= 100) {
			_hp = 100;
		}
		_alive = _hp > 0;
	}
}

Tanker::Tanker()
{
	_name = "Tanker";
	_power = 85;
	_hp = 100;
	_armor = 15;//Параметр, описывающий, что у Танкиста есть броня
}


Tanker::~Tanker()
{
}

void Tanker::attac(Unit & enemy)//Танкист может атаковать любого
{
	if (_alive) {
		enemy.getDamage(_power);
		cout << _name << " damaged " << enemy._name << " by " << _power << endl;
	}
	else
		cout << _name <<" failed to attac " << enemy._name << endl;
}

ostream & operator<<(ostream & os, const Tanker & tanker) {
	os << tanker._name;
	if (tanker._alive) {
		os << "\tHP:" << tanker._hp << endl;
	}
	else {
		os << "\tDied" << endl;
	}
	os << "\tPower:" << tanker._power << endl;
	os << "\tArmor:" << tanker._armor << endl;
	return os;
}