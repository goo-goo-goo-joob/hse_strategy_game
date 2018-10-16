#ifndef Pilot_h
#define Pilot_h

#include "Army.h"
class Pilot :
	public Army
{
public:
	Pilot();
	~Pilot();
	void attac(Unit &enemy);
	friend ostream & operator<<(ostream & os, const Pilot & pilot);
private:
	unsigned int _speed;
	virtual void getDamage(int damage) final;
};
#endif // Pilot_h