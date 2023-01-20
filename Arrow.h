#pragma once
#include <SFML/Graphics.hpp>

class Arrow {
public:
    sf::ConvexShape arrow;

    Arrow(int type);
    Arrow();
    void Move();
    void Draw(sf::RenderWindow &window) const;
    bool overTheScreen();
    ~Arrow();
};

