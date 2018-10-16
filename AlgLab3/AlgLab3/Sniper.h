#ifndef Sniper_h
#define Sniper_h

#include "Army.h"
class Sniper :
	public Army
{
public:
	Sniper();
	~Sniper();
	void attac(Unit &enemy);
};
#endif // Sniper_h