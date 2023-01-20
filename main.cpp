#include <SFML/Graphics.hpp>
#include <iostream>
#include "Arrow.h"
#include "ArrowDown.h"
#include "ArrowLeft.h"
#include "ArrowUp.h"
#include "ArrowRight.h"
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

    Clock clock;

    ArrowRight arr1;
    ArrowDown arr2;
    ArrowUp arr3;
    ArrowLeft arr4;

    vector<Arrow> arrows;
    int directions[100];

    srand(time(nullptr));

    for(int & direction : directions){
      direction=rand()%4+1;
    }


    for (int i=0;i<100;i++){
        switch (directions[i])
            case 1:
                //arrows[i] = new ArrowLeft;
                break;
    }




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
                        std::cout<<"Left was pushed";
                        if (arr4.arrow.getPosition().y>500 and arr4.arrow.getPosition().y<520){
                            score+=1;
                            arr4.arrow.setPosition(30,30);
                        }else score-=1;
                        break;

                        case Keyboard::Right:
                            case Keyboard::D:
                        std::cout<<"Right was pushed";
                        break;

                        case Keyboard::Up:
                            case Keyboard::W:
                        std::cout<<"Up was pushed";
                        break;

                        case Keyboard::Down:
                            case Keyboard::S:
                        std::cout<<"Down was pushed";
                        break;

                    default:
                        break;
                }
            }
        }



        if (arr4.overTheScreen()){
           arr4.arrow.setPosition(30,30);
            score-=1;
        }
        if (arr3.overTheScreen()){
            score-=1;
        }


        window.clear(Color(50, 50, 50));
        drawBackground(window);



            arr1.Draw(window);
            arr1.Move();

            if (clock.getElapsedTime().asSeconds()>spawn_Frequency){
                arr2.Draw(window);
                arr2.Move();
            }
            if (clock.getElapsedTime().asSeconds()>2*spawn_Frequency){
                arr3.Draw(window);
                arr3.Move();
            }
            if (clock.getElapsedTime().asSeconds()>3*spawn_Frequency){
                arr4.Draw(window);
                arr4.Move();
            }


            window.display();
    }
    return 0;
}