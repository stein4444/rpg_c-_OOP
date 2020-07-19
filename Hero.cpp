#include "Hero.h"

void MainHero::control()
{
	if (Keyboard::isKeyPressed) {
		if (Keyboard::isKeyPressed(Keyboard::Left)) 
			state = left; speed = 0.1;

		if (Keyboard::isKeyPressed(Keyboard::Right)) 
			state = right; speed = 0.1;
		
		if ((Keyboard::isKeyPressed(Keyboard::Up))) 
			state = up; speed = 0.1; 
		
		if (Keyboard::isKeyPressed(Keyboard::Down)) 
			state = down; speed = 0.1;
	}
}

bool MainHero::IsDead() const
{
	return FatherHero::IsDead();
}

int MainHero::Attack()
{
	return FatherHero::Attack();
}

void MainHero::Defense(int damage)
{
	health = health - (damage - armor);
}

//void MainHero::checkCollisionWithMap(float Dx, float Dy)
//{
//	for (int i = y / 32; i < (y + h) / 32; i++)//проходимся по элементам карты
//		for (int j = x / 32; j < (x + w) / 32; j++)
//		{
//			if (TileMap[i][j] == '0')//если элемент наш тайлик земли? то
//			{
//				if (Dy > 0) { y = i * 32 - h;  dy = 0; onGround = true; }//по Y вниз=>идем в пол(стоим на месте) или падаем. В этот момент надо вытолкнуть персонажа и поставить его на землю, при этом говорим что мы на земле тем самым снова можем прыгать
//				if (Dy < 0) { y = i * 32 + 32;  dy = 0; }//столкновение с верхними краями карты(может и не пригодиться)
//				if (Dx > 0) { x = j * 32 - w; }//с правым краем карты
//				if (Dx < 0) { x = j * 32 + 32; }// с левым краем карты
//			}
//			//else { onGround = false; }//надо убрать т.к мы можем находиться и на другой поверхности или платформе которую разрушит враг
//		}
//}
//void MainHero::update(float time)
//{
//	control();
//	switch (state)
//	{
//	case right:dx = speed; break;
//	case left:dx = -speed; break;
//	case up:dx = speed; break;
//	case down: dx = -speed; break;
//	case stay: break;
//	}
//	x += dx * time;
//	checkCollisionWithMap(dx, 0);
//	y += dy * time;
//	checkCollisionWithMap(0, dy);
//	sprite.setPosition(x + w / 2, y + h / 2);
//	if (health <= 0) { life = false; }
//	if (!isMove) { speed = 0; }
//	if (life) { setPlayerCoordinateForView(x, y); }
//}
//

void MainHero::Kill()
{

}
