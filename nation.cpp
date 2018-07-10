#include "nation.h"

/* Create a nation. */
Nation::Nation() {

}

/* Move troops for a nation. */
void Nation::moveTroops(Map& map) {
	char input;
	int source;
	int dest;
	int numTroops;
	while (1) {
		printf("Enter a source city or q to quit:\n");
		std::cin >> input;
		if (input == 'q') break;
		source = input - '0';
		if (source > 6 || source < 0) {
			printf("Invalid source city!\n");
			continue;
		}
		printf("Enter number of troops to move:\n");
		std::cin >> numTroops;
		printf("Enter a destination city:\n");
		std::cin >> input;
		dest = input - '0';
		if (dest > 6 || dest < 0) {
			printf("Invalid destination city!\n");
			continue;
		}
		if (std::abs(dest - source) != 1) {
			printf("Invalid move, cities must be adjacent!\n");
			continue;
		}
		if (!adjustTroopValues(map.cities[source], map.cities[dest], numTroops)) {
			printf("Invalid number of troops!\n");
			continue;
		}
	}
}

bool Nation::adjustTroopValues(City& src, City& dest, int num) {
	
}