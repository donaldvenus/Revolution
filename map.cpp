#include "map.h"

/* Create the map. */
Map::Map(int mapSize) : numCities(mapSize) {
	for (int i = 0; i < numCities; i++) {
		City newCity;
		cities.push_back(newCity);
	}
	printf("Map created!\n");
}

/* Print the map. */
void Map::print() {
	for (int i = 0; i < numCities; i++) {
		printf("City %d\n", i);
	}
}