#include "gamechanger.h"
#include <iostream>
#include "SDL.h"

Gamechanger::Gamechanger() : platformUsed_(std::string()) {
    std::cout<<"Game changer class was made"<<std::endl;
    Gamechanger::setPlatform();
}

Gamechanger::~Gamechanger(){
    std::cout<<"Destructor was called"<<std::endl;
}

std::string Gamechanger::getPlatform(){
    return platformUsed_;
}

void Gamechanger::setPlatform(){
    const char *platform = SDL_GetPlatform();
    std::string p(platform);
    platformUsed_ = p;
    
}

void Gamechanger::printPlatform() {
    if (Gamechanger::getPlatform() != "")
        std::cout << "Platform Detected: " << Gamechanger::getPlatform() << std::endl;
    else
        std::cout << "No System Platform Detected." << std::endl;
}