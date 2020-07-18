#pragma once
#include<SFML/Graphics.hpp>
using namespace sf;
class Menu
{
public:
	Menu() = default;
	~Menu();
	void draw(RenderWindow& window);
};

