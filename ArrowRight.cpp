#include "values.h"
#include "ArrowRight.h"

ArrowRight::ArrowRight() {
    arrow.setPointCount(3);
    arrow.setPoint(0,sf::Vector2f(0,0));
    arrow.setPoint(1,sf::Vector2f(0,80));
    arrow.setPoint(2,sf::Vector2f(40,40));
    arrow.setPosition(330,start_Pos);
    arrow.setFillColor(sf::Color::Cyan);
}

