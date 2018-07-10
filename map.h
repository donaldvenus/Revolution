#ifndef _MAP_H
#define _MAP_H

#include <stdio.h>
#include <vector>
#include "city.h"

#define MAP_SIZE 7

/* Contains the game map. */
class Map {
public:
	std::vector<City> cities;
	Map();
	void init();
	void updateCities();
	void print();
};

#endif