#include <iostream>
#include "consts.h"
#include "Gamestate.h"








int main()
{
	
	GameState g;
	STATE current = INIT;	// The start state

	while (true)
	{
		switch (current)
		{
		case INIT: splash();					// automatically moves to main menu, so it doesn't break!
		case MAIN: current = mainMenu(); break; // mainMenu returns which state we should move to.
		case PLAY: g.play();					// resets data to start a new game, doesn't need to break!
		case GAME: current = g.update(); break; // Update continuously until we return to main.
		case EXIT: exit(); return 0;			// return breaks the while loop.
		}
	}
}







