#ifndef Medico_h
#define Medico_h

#include "Civilian.h"
class Medico :
	public Civilian
{
public:
	Medico();
	~Medico();
	friend ostream & operator<<(ostream & os, const Medico & medico);
	void treat(Unit &patient);
private:
	int _power;
};
#endif // Medico_h