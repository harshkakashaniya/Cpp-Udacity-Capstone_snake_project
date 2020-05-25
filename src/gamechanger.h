#ifndef GAMECHANGER_H
#define GAMECHANGER_H

#include "SDL.h"
#include <string>
#include <vector>

#include <iostream>

class Gamechanger
{
public:
    Gamechanger();
    ~Gamechanger();
    void setSnakeColour(std::vector<int> Snake_C);
    void setBoardColour(std::vector<int> Board_C);
    std::vector<int> getSnakeColour();
    std::vector<int> getBoardColour();
    void setChoice(int c);
    int getChoice();
    void Converter();
    int calibrate(float f);
    void setSnakeColour(int red,int green,int blue);


private:
    std::vector<int> SnakeColour_;
    std::vector<int> BoardColour_;
    int choice_;


};

#endif