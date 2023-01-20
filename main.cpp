#include <SFML/Graphics.hpp>
#include <iostream>
#include "Arrow.h"
#include "background.h"
#include <cstdlib>
#include "values.h"

using namespace sf;
using namespace std;


int main()
{
    RenderWindow window(sf::VideoMode(400, 650), "SFML Application");

    ContextSettings settings;
    settings.antialiasingLevel = 100;

    int score=0;
    bool hit=false;

    Font font;
    font.loadFromFile("arial.ttf");

    Text text;
    text.setFont(font);

    text.setString("Score: "+to_string(score));

    text.setCharacterSize(32);

    text.setFillColor(sf::Color::White);


    //text.setStyle(sf::Text::Bold | sf::Text::Underlined);


    Clock clock;


    vector<Arrow*> arrows;
    int directions[amountOfArr];


    for(int i=0;i<amountOfArr;i++){
        directions[i]=rand()%4+1;
    }

    for (int i=0;i<amountOfArr;i++){
      arrows.push_back(new Arrow(directions[i]));}




    while (window.isOpen())
    {
        Event event{};


        while (window.pollEvent(event))
        {


            if (event.type==Event::Closed)
                window.close();

            if (event.type==Event::KeyPressed){
                switch(event.key.code){
                    case Keyboard::Left:
                        case Keyboard::A:
                        hit = false;
                        for(int i=0;i<amountOfArr;i++){
                            if(directions[i]==1) {
                                if(arrows[i]->arrow.getPosition().y>490 and arrows[i]->arrow.getPosition().y<530){
                                    score+=1;
                                    int x= arrows[i]->arrow.getPosition().x;
                                    int y= arrows[i]->arrow.getPosition().y;
                                    arrows[i]->arrow.setPosition(x,y-respawn);
                                    hit = true;
                                }
                            }
                        }
                        if (!hit){
                            score-=1;
                        }
                        sc;
                        break;

                        case Keyboard::Right:
                            case Keyboard::D:
                                hit = false;
                        for(int i=0;i<amountOfArr;i++){
                            if(directions[i]==4) {
                                if(arrows[i]->arrow.getPosition().y>490 and arrows[i]->arrow.getPosition().y<530){
                                    score+=1;
                                    int x= arrows[i]->arrow.getPosition().x;
                                    int y= arrows[i]->arrow.getPosition().y;
                                    arrows[i]->arrow.setPosition(x,y-respawn);
                                    hit = true;
                                    }
                            }
                        }
                        if (!hit){
                            score-=1;
                        }
                        sc;
                        break;

                        case Keyboard::Up:
                            case Keyboard::W:
                        hit = false;
                        for(int i=0;i<amountOfArr;i++){
                            if(directions[i]==2) {
                                if(arrows[i]->arrow.getPosition().y>500 and arrows[i]->arrow.getPosition().y<540){
                                    score+=1;
                                    int x= arrows[i]->arrow.getPosition().x;
                                    int y= arrows[i]->arrow.getPosition().y;
                                    arrows[i]->arrow.setPosition(x,y-respawn);
                                    hit = true;
                                    }
                            }
                        }
                        if (!hit){
                            score-=1;
                        }
                        sc;
                        break;


                        case Keyboard::Down:
                            case Keyboard::S:
                                hit = false;
                        for(int i=0;i<amountOfArr;i++){
                            if(directions[i]==3) {
                                if(arrows[i]->arrow.getPosition().y>500 and arrows[i]->arrow.getPosition().y<540){
                                    score+=1;
                                    int x= arrows[i]->arrow.getPosition().x;
                                    int y= arrows[i]->arrow.getPosition().y;
                                    arrows[i]->arrow.setPosition(x,y-respawn);
                                    hit = true;
                                    }
                            }
                        }
                        if (!hit){
                            score-=1;
                        }
                        sc;
                        break;

                    default:
                        break;
                }
            }
        }

        window.clear(Color(50, 50, 50));
        drawBackground(window);
        window.draw(text);

        for(int i =0;i<amountOfArr;i++){
            if(clock.getElapsedTime().asSeconds()>i*spawn_Frequency){
                arrows[i]->Draw(window);
                arrows[i]->Move();
            }
        }
        for(int i =0;i<amountOfArr;i++){
            if(arrows[i]->overTheScreen()){
                int x= arrows[i]->arrow.getPosition().x;
                int y= arrows[i]->arrow.getPosition().y;
                arrows[i]->arrow.setPosition(x,y-respawn);
                score-=1;
                sc;
            }
        }


        window.display();
    }
    return 0;
}