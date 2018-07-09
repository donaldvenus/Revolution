#include "map.h"

/* Create the map. */
Map::Map() {
	for (int i = 0; i < MAP_SIZE; i++) {
		City newCity;
		cities.push_back(newCity);
	}
}

/* Initialize map starting state. */
void Map::init() {
	cities[0].setOwner(EMPIRE);
	cities[0].setNumEmpire(2000);
	cities[1].setOwner(EMPIRE);
	cities[1].setNumEmpire(2000);
	cities[2].setOwner(REBELS);
	cities[2].setNumEmpire(5000);
	cities[2].setNumRebels(6000);
	cities[3].setOwner(REBELS);
	cities[3].setNumRebels(2000);
	cities[4].setOwner(REBELS);
	cities[4].setNumRebels(2000);
	cities[5].setOwner(REBELS);
	cities[5].setNumRebels(2000);
	cities[6].setOwner(REBELS);
	cities[6].setNumRebels(2000);
}

/* Print the map. */
void Map::print() {
	for (int i = 0; i < MAP_SIZE; i++) {
		printf("\n");
		printf("City %d\n", i);
		if (cities[i].getOwner() == EMPIRE) printf("Owner: Empire\n");
		else printf("Owner: Rebels\n");
		printf("%d Empire\n", cities[i].getNumEmpire());
		printf("%d Rebels\n", cities[i].getNumRebels());
	}
	printf("\n");
}