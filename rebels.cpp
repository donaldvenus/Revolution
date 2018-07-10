#include "rebels.h"

/* Create the rebels. */
Rebels::Rebels() {
}

/* Adjust troop deployment and return true if valid move. */
bool Rebels::adjustTroopValues(City& src, City& dest, int num) {
	if (num > src.getNumRebels()) {
		printf("Invalid number of troops, attempted to move %d but only %d exist.\n", num, src.getNumRebels());
		return false;
	}
	src.setNumRebels(src.getNumRebels() - num);
	dest.setNewRebels(num);
	return true;
}