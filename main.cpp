#include"Game.h"
#include<iostream>
int main()
{

    Game game;

	while (game.IsRunning())
	{
		game.CaptureMove(); // We want to capture input at the start of a frame.
		game.Update();
		game.LateUpdate();
		game.Draw();
		game.CalculateDeltaTime();
	}
	return 0;
}