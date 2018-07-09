#include "city.h"

/* Create a city. */
City::City() {
	numRebels = 0;
	numEmpire = 0;
	owner = NEUTRAL;
}

/* Get number of Imperial troops. */
int City::getNumEmpire() {
	return numEmpire;
}

/* Set number of Imperial troops. */
void City::setNumEmpire(int num) {
	numEmpire = num;
}

/* Get number of Rebel troops. */
int City::getNumRebels() {
	return numRebels;
}

/* Set number of Rebel troops. */
void City::setNumRebels(int num) {
	numRebels = num;
}

/* Get current city owner. */
int City::getOwner() {
	return owner;
}

/* Set new city owner. */
void City::setOwner(int own) {
	owner = own;
}