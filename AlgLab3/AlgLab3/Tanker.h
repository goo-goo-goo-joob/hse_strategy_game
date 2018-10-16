#ifndef Tanker_h
#define Tanker_h

#include "Army.h"
class Tanker :
	public Army
{
public:
	Tanker();
	~Tanker();
	void attac(Unit &enemy);
	friend ostream & operator<<(ostream & os, const Tanker & tanker);
private:
	unsigned int _armor;
	virtual void getDamage(int damage) final;
};
#endif // Tanker_h