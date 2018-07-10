#ifndef _GAME_H
#define _GAME_H

#include <stdio.h>
#include "nation.h"
#include "empire.h"
#include "rebels.h"
#include "map.h"

/* Contains the entire game */
class Game {
	Empire empire;
	Rebels rebels;
	Map map;
	bool active;
public:
	Game();
	void play();
	void playRound();
};

#endif