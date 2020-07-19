#pragma once
#include<SFML/Graphics.hpp>
#include"Window.h"
#include "WorkingDirectory.h"
#include"Move.h"
#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game();
    void Update();
    void LateUpdate();
    void Draw();
    bool IsRunning() const;
    void CalculateDeltaTime();
    void CaptureMove();
private:
    Window window;
    sf::Texture vikingTexture;
    sf::Sprite vikingSprite;
    WorkingDirectory workingDir;
    sf::Clock clock;
    float deltaTime;
    Move move;
};

#endif /* Game_hpp */