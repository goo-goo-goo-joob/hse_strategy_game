#include "Sniper.h"



Sniper::Sniper()
{
	_name = "Sniper";
	_power = 80;
	_hp = 100;
}


Sniper::~Sniper()
{
}

void Sniper::attac(Unit & enemy)//Снайпер может атаковать любого
{
	if (_alive) {
		enemy.getDamage(_power);
		cout << _name << " damaged " << enemy._name << " by " << _power << endl;
	}
	else
		cout << _name << " failed to attac" << enemy._name << endl;
}
