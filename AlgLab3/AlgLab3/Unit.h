#ifndef Unit_h
#define Unit_h

#include <iostream>
#include <string>
#pragma warning(disable: 4996) 

using namespace std;

class Unit {
public:
	string _name;
	virtual void getDamage(int damage) = 0; // Аксессор к полю _hp
	Unit();
	virtual ~Unit();
protected:
	int _hp;
	bool _alive;
};
#endif // Unit_h