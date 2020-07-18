#include "FatherHero.h"

bool FatherHero::IsDead() const
{
    return health < 1;
}

int FatherHero::Attack()
{
    return damage;
}

void FatherHero::Defense(int damage)
{
}

void FatherHero::update(float time)
{
}
