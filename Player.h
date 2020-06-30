//
// Created by Ivan on 27.06.2020.
//

#ifndef UNTITLED2_PLAYER_H
#define UNTITLED2_PLAYER_H
#include <SFML/Graphics.hpp>

class Player {
private:
    sf::Texture playerTexture;
    int size;
    int hp = 100;

public:
    Player();
    sf::Sprite playerSprite;
    ~Player();
    float posx;
    float posy;
    int getHP();


};


#endif //UNTITLED2_PLAYER_H
