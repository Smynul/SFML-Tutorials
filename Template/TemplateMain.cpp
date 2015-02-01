/**
    @Author Asif Ahmed
    @Website http://quickgrid.wordpress.com
    @Description Sample template for SFML Project
*/

#include<SFML/Graphics.hpp>
#include<iostream>
using namespace sf;

int main(){
    //create game window
    RenderWindow window(VideoMode(600,400), "Angry Flappy Zombie");

    //run the program as long as window is open
    while(window.isOpen()){
        //check the events triggered in each iteration
        Event event;
        while(window.pollEvent(event)){
            //window close action triggered
            switch(event.type){
            case Event::Closed:
                window.close();
                break;
            }
        }
        //clear or paint the window with color of choice
        window.clear(Color::White);

        //draw methods or other actions here


        //load font from file
        Font font;
        if(!font.loadFromFile("resources/fonts/sheandy.ttf")){
            std::cout << "Error" << std::endl;
        }

        //setting font from different loaded fonts
        Text text;
        text.setFont(font);

        //set font text and style the font
        text.setString("Angry Flappy Zombie");
        text.setCharacterSize(24);
        text.setColor(Color::Red);
        text.setPosition(100,200);

        //show the font
        window.draw(text);

        //end the current frame
        window.display();
    }

    return 0;
}
