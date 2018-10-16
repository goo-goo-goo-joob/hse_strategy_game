#include "Unit.h"
#include "Army.h"
#include "Civilian.h"
#include "Sniper.h"
#include "Tanker.h"
#include "Pilot.h"
#include "Medico.h"

int main() {
	Army *a = new Army();
	Sniper *s = new Sniper();
	Tanker *t = new Tanker();
	Pilot *p = new Pilot();
	Civilian *c = new Civilian();
	Medico *m = new Medico();
	cout << *a << *s << *t << *p << *c << *m;
	a->attac(*c);
	a->attac(*t);
	m->treat(*c);
	s->attac(*a);
	p->attac(*s);
	p->attac(*s);
	s->attac(*t);
	t->attac(*p);
	t->attac(*m);
	m->treat(*p);
	cout << *a << *s << *t << *p << *c << *m;
	delete a;
	delete s;
	delete t;
	delete p;
	delete c;
	delete m;
	return 0;
}