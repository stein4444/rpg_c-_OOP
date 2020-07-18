#pragma once
#include"FatherHero.h"
class Puten:public FatherHero
{
public:
	Puten():FatherHero("Puten", 0, 0, 0)

	virtual bool IsDead() const override;
	virtual int Attack()override;
	virtual void Defense(int damage)override;
	virtual void update(float time)override;
};