#include "Game.h"


//Static functions

//Initialize functions


void Game::initWindow()
{
	//Creates a  SFML window  using options from a window.ini file 


	std::string title = "RPG";
	sf::VideoMode window_bonus(800, 600);
	unsigned framerate_limit = 120;
	bool vertical_sync_enable = false;


	this->window = new sf::RenderWindow(window_bonus, title);
	this->window->setFramerateLimit(framerate_limit);
	this->window->setVerticalSyncEnabled(vertical_sync_enable);

}

//constructor destructor
Game::Game()
{
	this->initWindow();
}

Game::~Game()
{

}


void Game::updateDt()
{
	//Updates the dt variable with the time it takes to update and render one frame
	this->dtClock.restart().asSeconds();


}

//fucntions
void Game::updateSFMLEvents()
{
	while (this->window->pollEvent(this->sfEvent))
	{
		if (this->sfEvent.type == sf::Event::Closed)
			this->window->close();
	}

}

void Game::update()
{
	this->updateSFMLEvents();
}

void Game::redner()
{
	this->window->clear();
	//Render items
	this->window->display();
}

void Game::run()
{


	while (this->window->isOpen())
	{
		this->updateDt();
		this->update();
		this->redner();
	}
}
