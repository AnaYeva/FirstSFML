#include "Arrow.h"
#include "values.h"
#include <SFML/Graphics.hpp>
using namespace sf;

Arrow::Arrow(int type) {
    switch (type) {
        case 1:
            arrow.setPointCount(3);
            arrow.setPoint(0, Vector2f(40, 0));
            arrow.setPoint(1, Vector2f(40, 80));
            arrow.setPoint(2, Vector2f(0, 40));
            arrow.setPosition(30, start_Pos);
            arrow.setFillColor(sf::Color::Cyan);
            break;
        case 2:
            arrow.setPointCount(3);
            arrow.setPoint(0,Vector2f(40,0));
            arrow.setPoint(1,Vector2f(80,40));
            arrow.setPoint(2,Vector2f(0,40));
            arrow.setPosition(110,start_Pos+20);
            arrow.setFillColor(sf::Color::Cyan);
            break;
        case 3:
            arrow.setPointCount(3);
            arrow.setPoint(0,Vector2f(0,0));
            arrow.setPoint(1,Vector2f(80,0));
            arrow.setPoint(2,Vector2f(40,40));
            arrow.setPosition(210,start_Pos+20);
            arrow.setFillColor(sf::Color::Cyan);
            break;
        case 4:
            arrow.setPointCount(3);
            arrow.setPoint(0,sf::Vector2f(0,0));
            arrow.setPoint(1,sf::Vector2f(0,80));
            arrow.setPoint(2,sf::Vector2f(40,40));
            arrow.setPosition(330,start_Pos);
            arrow.setFillColor(sf::Color::Cyan);
            break;
        default:
            break;

    }
}
Arrow::Arrow() {
}

void Arrow::Draw(sf::RenderWindow &window) const
{
window.draw(arrow);
}


void Arrow::Move(){
    arrow.move(sf::Vector2f(0,0.22));
}

bool Arrow::overTheScreen(){
    if (arrow.getPosition().y>550)return true;
    else return false;
}

Arrow::~Arrow() {
}
