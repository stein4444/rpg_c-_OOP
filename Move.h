#pragma once
#include "Bitmask.h"
#ifndef Input_hpp
#define Input_hpp

#include <SFML/Graphics.hpp>

class Move
{
private:
    Bitmask thisFrameKeys;
    Bitmask lastFrameKeys;
public:
    enum class Key
    {
        None = 0,
        Left = 1,
        Right = 2,
        Up = 3,
        Down = 4,
        Esc = 5
    };
    bool IsKeyPressed(Key keycode); // Returns true if the key is pressed.
    bool IsKeyDown(Key keycode); // Returns true if the key was just pressed.
    bool IsKeyUp(Key keycode); // Returns true if the key was just released.
    void Update();
};

#endif /* Input_hpp */