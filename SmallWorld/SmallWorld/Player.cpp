//
//  Player.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-07.
//  Copyright © 2018 Charles Chan. All rights reserved.
//
#include <iostream>
#include "Player.hpp"
int iD = 0;
Player::Player(){
    iD++;
}
Player::~Player(){
    //???
    //delete race;
    race = nullptr;
    //delete power;
    power = nullptr;
    delete availTokens;
    availTokens = nullptr;
    //delete dice;
    dice = nullptr;
}
void Player::picks_race(){
    cout << "picked race";
}
void Player::conquers(){
    cout << "conquered";
}
void Player::scores(){
    cout << "scores";
}
void Player::addRegion(Region r){
    regions.push_back(r);
}
void Player::showSheet(){
    
    cout << "Player " << iD << ": " << race->getRace() << endl;
    cout << "Starting token amount :" << race->getMaxToken() + power->getMaxToken() << endl;
    cout << "Badge: " << power->getName()<< ", Skill: "<< power->getSkill()<<endl;
    cout << "Banner: " << race->getRace()<< ", Skill: "<< race->getSkill() <<endl;
    cout << "Number of regions: " << regions.size() <<endl <<endl;
}
