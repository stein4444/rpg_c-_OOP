#pragma once
#include<SFML/Graphics.hpp>
//#include"Menu.h"
using namespace sf;
class Game
{
private:
	//Variables
	//Menu& menu;
public:
	RenderWindow* window;
	Event sfEvent;

	Clock dtClock;
	float dt;
	//initialize
	void initWindow();
	// constructors destructors
	Game();
	virtual ~Game();
	//functions
	void updateDt();
	void updateSFMLEvents();
	void update();
	void redner();
	void run();
};
