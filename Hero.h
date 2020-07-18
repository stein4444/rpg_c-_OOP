#pragma once
#include"FatherHero.h"
class MainHero :public FatherHero
{
protected:
	int lvl;
	int exp;
	enum { left, right, up, down, jump, stay }state;
public:
	MainHero(Image& heroImage, float X, float Y, int W, int H) :
		FatherHero(heroImage, X, Y, W, H, "Annunak", 500, 50, 20), lvl(1), exp(0) {
		state = stay;
		sprite.setTextureRect(IntRect(4, 19, w, h));
	}
	
	void control();
	virtual bool IsDead() const override;
	virtual int Attack()override;
	virtual void Defense(int damage)override;
	virtual void update(float time)override;
	void checkCollisionWithMap(float Dx, float Dy);
	void Kill();
};