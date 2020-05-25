#ifndef GAMECHANGER_H
#define GAMECHANGER_H

#include "SDL.h"
#include <string>
#include <iostream>

class Gamechanger
{
public:
    Gamechanger();
    ~Gamechanger();
    void setPlatform();
    std::string getPlatform();
    void printPlatform();

private:
    std::string platformUsed_;
};

#endif