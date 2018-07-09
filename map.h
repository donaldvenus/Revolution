#ifndef _MAP_H
#define _MAP_H

#include <stdio.h>
#include <vector>
#include "city.h"

#define MAP_SIZE 7

/* Contains the game map. */
class Map {
	std::vector<City> cities;
public:
	Map();
	void init();
	void print();
};

#endif