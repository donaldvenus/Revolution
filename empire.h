#ifndef _EMPIRE_H
#define _EMPIRE_H

#include "nation.h"

/* Empire. */
class Empire : public Nation {
public:
	Empire();
	bool adjustTroopValues(City& src, City& dest, int num);
};

#endif