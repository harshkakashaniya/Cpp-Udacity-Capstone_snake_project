#include "gamechanger.h"
#include <iostream>
#include "SDL.h"

Gamechanger::Gamechanger(): choice_{0}{
    std::cout<<"Game changer class was made"<<std::endl;
    Gamechanger::Converter();
}

Gamechanger::~Gamechanger(){
    std::cout<<"Destructor was called"<<std::endl;
}

int Gamechanger::getChoice(){
    return Gamechanger::choice_;
}

void Gamechanger::setChoice(int c){
    Gamechanger::choice_ =c;
}

void Gamechanger::setSnakeColour(std::vector<int> Snake_C){
    SnakeColour_=Snake_C;
}

void Gamechanger::setBoardColour(std::vector<int> Board_C){
    BoardColour_=Board_C;
}

    std::vector<int> Gamechanger::getSnakeColour(){
        return SnakeColour_;
    }
    std::vector<int> Gamechanger::getBoardColour(){
        return BoardColour_;
    }

int Gamechanger::calibrate(float f){
    if (f>255) return 255;
    else if (f<0) return 0;
    else return f;
}


void Gamechanger::setSnakeColour(int red,int green,int blue){
    std::vector<int> S_color = {red, green, blue, 255};
    SnakeColour_=S_color;
}

void Gamechanger::Converter(){
    float theme;
    std::cout << "Set your Favourate Theme" << std::endl;
    std::cout << "Press 1 : Red Snake Blue Board" << std::endl;
    std::cout << "Press 2 : Green Snake Red Board" << std::endl;
    std::cout << "Press 3 : Blue Snake Green Board" << std::endl;
    std::cout << "Press 4 : Custom Colured Snake Black Board" << std::endl;


    int isNum = scanf("%f", &theme);
    if (isNum){
        int number=theme;
        switch(number) {
            case 1:
            {
                std::cout << "Theme 1 Choosen" << std::endl;
                std::vector<int> S_color = {255, 0, 0, 255};
                std::vector<int> B_color = {0, 0, 255, 0};
                setSnakeColour(S_color);
                setBoardColour(B_color);
                setChoice(number);
                break;
            }
            case 2:
            {
                std::cout << "Theme 2 Choosen" << std::endl;
                std::vector<int> S_color = {0, 255, 0, 255};
                std::vector<int> B_color = {255,0, 0, 255};
                setSnakeColour(S_color);
                setBoardColour(B_color);
                setChoice(number);
                break;
            }
            case 3 :
            {
                std::cout << "Theme 3 Choosen" << std::endl;
                std::vector<int> S_color = {0, 0, 255, 255};
                std::vector<int> B_color = {0, 255, 0, 255};

                setSnakeColour(S_color);
                setBoardColour(B_color);
                setChoice(number);
                break;
            }
            case 4 :
            {
                std::cout << "Theme 4 Choosen" << std::endl;
                std::cout << "Custom Snake Colour" << std::endl;
                std::cout << "Red Colour (0 to 255)" << std::endl;
                float in_red;
                int isNum_r = scanf("%f", &in_red);
                auto red=calibrate(in_red);
                std::cout << "Green Colour (0 to 255)" << std::endl;
                float in_green;
                int isNum_g = scanf("%f", &in_green);
                auto green=calibrate(in_green);
                std::cout << "Blue Colour (0 to 255)" << std::endl;
                float in_blue;
                int isNum_b = scanf("%f", &in_blue);
                auto blue=calibrate(in_blue);
                std::vector<int> B_color = {0, 0, 0, 255};

                setSnakeColour(red,green,blue);
                setBoardColour(B_color);
                setChoice(number);
                break;
            }
            default :
            {
                std::cout << "Theme Default Choosen" << std::endl;
                std::vector<int> S_color = {0, 0, 0, 255};
                std::vector<int> B_color = {255, 255, 255, 255};

                setSnakeColour(S_color);
                setBoardColour(B_color);
                setChoice(0);
            }
        }
    }else{
        std::cout << "Theme Default Choosen" << std::endl;
        std::vector<int> S_color = {0, 0, 0, 255};
        std::vector<int> B_color = {255, 255, 255, 255};

        setSnakeColour(S_color);
        setBoardColour(B_color);
        setChoice(0);
    }

}
