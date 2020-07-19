#include "Game.h"

Game::Game():window("C++ RPG")
{
	vikingTexture.loadFromFile("viking.png"); // 1   	
		vikingSprite.setTexture(vikingTexture);
		deltaTime = clock.restart().asSeconds();
}

void Game::Update()
{ 
    window.Update();

    const sf::Vector2f& spritePos = vikingSprite.getPosition();
    const int moveSpeed = 100;

    int xMove = 0;
    if (move.IsKeyPressed(Move::Key::Left)) // 1
    {
        xMove = -moveSpeed; // 2
    }
    else if (move.IsKeyPressed(Move::Key::Right))
    {
        xMove = moveSpeed;
    }

    int yMove = 0;
    if (move.IsKeyPressed(Move::Key::Up))
    {
        yMove = -moveSpeed;
    }
    else if (move.IsKeyPressed(Move::Key::Down))
    {
        yMove = moveSpeed;
    }

    float xFrameMove = xMove * deltaTime; // 2
    float yFrameMove = yMove * deltaTime;

    vikingSprite.setPosition(spritePos.x + xFrameMove, spritePos.y + yFrameMove);

}

void Game::LateUpdate()
{

}

void Game::Draw() 
{
	window.BeginDraw();

	window.Draw(vikingSprite); // Draw the sprite.

	window.EndDraw();
}

bool Game::IsRunning() const
{
	// We’ll return true here for now but this will be 
	// changed shortly as we need a method of closing the window.
	return window.IsOpen();
}

void Game::CalculateDeltaTime()
{
	deltaTime = clock.restart().asSeconds();
}

void Game::CaptureMove()
{
	move.Update();
}
