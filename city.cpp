#include "city.h"

/* Create a city. */
City::City() {
	numRebels = 0;
	numEmpire = 0;
	newRebels = 0;
	newEmpire = 0;
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

/* Set new Rebel troops for the city. */
void City::setNewRebels(int num) {
	newRebels += num;
}
	
/* Set new Imperial troops for the city. */
void City::setNewEmpire(int num) {
	newEmpire += num;
}

/* Update cities with new troop values. */
void City::updateTroops() {
	numRebels += newRebels;
	numEmpire += newEmpire;
	newRebels = 0;
	newEmpire = 0;
}