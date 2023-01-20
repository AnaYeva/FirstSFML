#include "values.h"
#include "ArrowLeft.h"
#include "Arrow.h"
using namespace sf;

ArrowLeft::ArrowLeft() {
    arrow.setPointCount(3);
    arrow.setPoint(0,Vector2f(40,0));
    arrow.setPoint(1,Vector2f(40,80));
    arrow.setPoint(2,Vector2f(0,40));
    arrow.setPosition(30,start_Pos);
    arrow.setFillColor(sf::Color::Cyan);
}
