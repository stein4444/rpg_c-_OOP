#ifndef Window_h
#define Window_h

#include <SFML/Graphics.hpp>

class Window
{
private:
    sf::RenderWindow window;

public:
    Window()= default;
    Window(const std::string& windowName);

    void Update();

    void BeginDraw();
    void Draw(const sf::Drawable& drawable);
    void EndDraw();

    bool IsOpen() const;

};

#endif /* Window_h */