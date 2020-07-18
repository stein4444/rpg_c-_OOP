#pragma once
#include"FatherHero.h"
class Tigor:public FatherHero
{
public:
	Tigor(Image& tigorImage, float X, float Y, int W, int H) :FatherHero(tigorImage, X, Y, W, H, "Tigor",150, 25, 5 ) {
		
			sprite.setTextureRect(IntRect(0, 0, w, h));
			dx = 0.1;
	}

	virtual bool IsDead() const override;
	virtual int Attack()override;
	virtual void Defense(int damage)override;
	virtual void update(float time)override;
};


