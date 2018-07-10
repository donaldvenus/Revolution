#ifndef _REBELS_H
#define _REBELS_H

#include "nation.h"

/* Empire. */
class Rebels : public Nation {
public:
	Rebels();
	bool adjustTroopValues(City& src, City& dest, int num);
};

#endif