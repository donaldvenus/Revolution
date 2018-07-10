#include "game.h"

/* Create the game. */
Game::Game() {
	rebels = Rebels();
	empire = Empire();
	map = Map();
	active = true;
}

/* Start the game. */
void Game::play() {
	map.init();
	while (active) {
		// Main game loop.
		playRound();
	}
	printf("Game finished\n");
}

/* Play one round of the game. */
void Game::playRound() {
	map.print();
	printf("EMPIRE TURN\n");
	empire.moveTroops(map);
	map.updateCities();
	map.print();
	printf("REBELS TURN\n");
	rebels.moveTroops(map);
	map.updateCities();
	map.print();
	//resolveCombat();
	//map.print();
	//production();
	//map.print();
}