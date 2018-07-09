#ifndef _CITY_H
#define _CITY_H

#include <stdio.h>

#define REBELS 0
#define EMPIRE 1
#define NEUTRAL 2

/* Contains all city data. */
class City {
	int numRebels;
	int numEmpire;
	int owner;
public:
	City();
	int getNumEmpire();
	void setNumEmpire(int num);
	int getNumRebels();
	void setNumRebels(int num);
	int getOwner();
	void setOwner(int own);
};

#endif