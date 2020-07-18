#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>
using namespace sf;

class FatherHero {
public:
	float dx, dy, x, y, speed, moveTimer;
	int w, h, health;
	int damage;
	int armor;
	Texture texture;
	Sprite sprite;
	String name;
	FatherHero(Image& image, float X, float Y, int W, int H, String Name, int health, int damage, int armor) {
		x = X; y = Y; w = W; h = H; name = Name;

		speed = 0; health = 100; dx = 0; dy = 0;
		texture.loadFromImage(image);
		sprite.setTexture(texture);
		sprite.setOrigin(w / 2, h / 2);
	}
	virtual bool IsDead() const;
	virtual int Attack();
	virtual void Defense(int damage);
	virtual void update(float time);
};