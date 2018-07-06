#ifndef _MAP_H
#define _MAP_H

#include <stdio.h>
#include <vector>
#include "city.h"

/* Contains the game map. */
class Map {
	std::vector<City> cities;
	int numCities;
public:
	Map(int mapSize);
	void print();
};

#endif