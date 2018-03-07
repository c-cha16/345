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
Player::Player(int i){
    setID(i);
    cout << "Player " << i << " created" <<endl;
    Dice dice = *new Dice();
}
Player::~Player(){
    //???
    //delete race;
    race = nullptr;
    //delete power;
    power = nullptr;
    //delete availTokens;
    availTokens = nullptr;
    //delete dice;
    //dice = NULL;
}
void Player::picks_race(){
    cout << "Player "<<iD << ": "<< "picks race and special badge"<<endl;
}
void Player::conquers(){
    cout << "Player "<<iD << ": "<<"go and conquer regions" <<endl;
}
void Player::scores(){
    cout << "Player "<<iD << ": "<< "go and score your active and declined races" <<endl;
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
