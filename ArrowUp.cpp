#include "values.h"
#include "ArrowUp.h"
using namespace sf;

ArrowUp::ArrowUp() {
    arrow.setPointCount(3);
    arrow.setPoint(0,Vector2f(40,0));
    arrow.setPoint(1,Vector2f(80,40));
    arrow.setPoint(2,Vector2f(0,40));
    arrow.setPosition(110,start_Pos+20);
    arrow.setFillColor(sf::Color::Cyan);
}
