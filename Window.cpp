#include "Window.h"




Window::Window(const std::string& windowName)
    : window(sf::VideoMode(800, 600), windowName, sf::Style::Titlebar) 
{
    window.setVerticalSyncEnabled(true); 
}

void Window::Update()
{
    sf::Event event; // 3
    if (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            window.close();
        }
    }
}

void Window::BeginDraw() // 4
{
    window.clear(sf::Color::White);
}

void Window::Draw(const sf::Drawable& drawable)
{
    window.draw(drawable);
}

void Window::EndDraw()
{
    window.display();
}

bool Window::IsOpen() const
{
    return window.isOpen();
}