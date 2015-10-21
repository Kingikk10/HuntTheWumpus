#pragma once







enum STATE { INIT, MAIN, PLAY, GAME, EXIT };


STATE mainMenu();

void splash();

void exit();

int getNumValid(int min, int max);


