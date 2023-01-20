#include "values.h"
#include "ArrowDown.h"
using namespace sf;

ArrowDown::ArrowDown() {
    arrow.setPointCount(3);
    arrow.setPoint(0,Vector2f(0,0));
    arrow.setPoint(1,Vector2f(80,0));
    arrow.setPoint(2,Vector2f(40,40));
    arrow.setPosition(210,start_Pos+20);
    arrow.setFillColor(sf::Color::Cyan);
}
