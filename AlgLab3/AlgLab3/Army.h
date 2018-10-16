#ifndef Army_h
#define Army_h

#include "Unit.h"
class Army :
	public Unit
{
public:
	Army();
	~Army();
	void attac(Unit &enemy);
	friend ostream & operator<<(ostream & os, const Army & army);
protected:
	unsigned int _power;
	virtual void getDamage(int damage) override;
};
#endif // Army_h