#include "Army.h"



Army::Army()
{
	_name = "Soldier";
	_power = 10;
	_hp = 100;
}


Army::~Army()
{
}


void Army::getDamage(int damage)
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

void Army::attac(Unit & enemy)
{
	if (_alive && (enemy._name == "Solider" || enemy._name == "Citizen" || enemy._name == "Medico")) {
		//Обычный солдат может ранить только солдатов, мирных жителей и врачей
		enemy.getDamage(_power);
		cout << _name << " damaged " << enemy._name << " by " << _power << endl;
	}
	else
		cout << _name << " failed to attac " << enemy._name << endl;
}

ostream & operator<<(ostream & os, const Army & army)
{
	os << army._name;
	if (army._alive) {
		os << "\tHP:" << army._hp << endl;
	}
	else {
		os << "\tDied" << endl;
	}
	os << "\tPower:" << army._power << endl;
	return os;
}
