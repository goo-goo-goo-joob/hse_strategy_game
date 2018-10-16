#include "Medico.h"



Medico::Medico()
{
	_name = "Medico";
	_hp = 100;
	_power = 30;
}


Medico::~Medico()
{
}

void Medico::treat(Unit & patient)
{
	if (_alive) {
		patient.getDamage(-_power);//Медик изменяет hp
		cout << "Medico treated " << patient._name << " by " << _power << endl;
	}
	else {
		cout << "Medico failed to treat"<<endl;
	}
}

ostream & operator<<(ostream & os, const Medico & medico)
{
	os << medico._name;
	if (medico._alive) {
		os << "\tHP:" << medico._hp << endl;
	}
	else {
		os << "\tDied" << endl;
	}
	os << "\tTreating power:" << medico._power << endl;
	return os;
}
