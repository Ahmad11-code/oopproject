#pragma once
#include <iostream>
using namespace std;



class GameBoy {
    
private:
	Player player;
	Screen screen;
	SoundSystem soundSystem;
	Menu menu;
public:
	switchGame(Game game);
	start();
	shutdown();


};