#ifndef _NATION_H
#define _NATION_H

#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include "city.h"
#include "map.h"

/* Inherited class for rebels and empire. */
class Nation {
public:
	Nation();
	void moveTroops(Map& map);
	virtual bool adjustTroopValues(City& src, City& dest, int num);
};

#endif