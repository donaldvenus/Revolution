#include "empire.h"

/* Create the empire. */
Empire::Empire() {
}

/* Adjust troop deployment and return true if valid move. */
bool Empire::adjustTroopValues(City& src, City& dest, int num) {
	if (num > src.getNumEmpire()) {
		printf("Invalid number of troops, attempted to move %d but only %d exist.\n", num, src.getNumEmpire());
		return false;
	}
	src.setNumEmpire(src.getNumEmpire() - num);
	dest.setNewEmpire(num);
	return true;
}