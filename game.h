#ifndef _GAME_H
#define _GAME_H

#include <stdio.h>
#include "empire.h"
#include "rebels.h"
#include "map.h"

/* Contains the entire game */
class Game {
public:
	Game();
	void start();
};

#endif