#pragma once
#include <SFML/Graphics.hpp>
#include "Arrow.h"
#include "ArrowDown.h"
#include "ArrowLeft.h"
#include "ArrowUp.h"
#include "ArrowRight.h"
#include "background.h"
using namespace sf;

void drawBackground(sf::RenderWindow &window){
    RectangleShape rectangle(sf::Vector2f(500, 100.f));
    rectangle.setPosition(0, 500);
    rectangle.setFillColor(Color(250,250,250,50));

    ArrowRight arrowBackgroundRight;
    arrowBackgroundRight.arrow.setFillColor(Color(250,250,250,30));
    arrowBackgroundRight.arrow.setPosition (330,510);

    ArrowLeft arrowBackgroundLeft;
    arrowBackgroundLeft.arrow.setFillColor(Color(250,250,250,30));
    arrowBackgroundLeft.arrow.setPosition (30,510);

    ArrowUp arrowBackgroundUp;
    arrowBackgroundUp.arrow.setFillColor(Color(250,250,250,30));
    arrowBackgroundUp.arrow.setPosition (110,530);

    ArrowDown arrowBackgroundDown;
    arrowBackgroundDown.arrow.setFillColor(Color(250,250,250,30));
    arrowBackgroundDown.arrow.setPosition(210,530);
    window.draw(rectangle);
    arrowBackgroundRight.Draw(window);
    arrowBackgroundDown.Draw(window);
    arrowBackgroundUp.Draw(window);
    arrowBackgroundLeft.Draw(window);
};
