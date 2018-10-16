#ifndef Civilian_h
#define Civilian_h

#include "Unit.h"
class Civilian :
	public Unit
{
public:
	Civilian();
	~Civilian();
	friend ostream & operator<<(ostream & os, const Civilian & civil);
protected:
	virtual void getDamage(int damage) final;
};

#endif // Civilian_h