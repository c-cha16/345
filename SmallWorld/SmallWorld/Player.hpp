//
//  Player.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-07.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp
//include regions
#include "Tokens.hpp"
#include "Badges.hpp"
#include "RaceBanners.hpp"
#include <stdio.h>
using namespace std;

class Player {
public:
    void picks_race();
    void conquers();
    void scores();
    Player();
    ~Player();
    void setBadge(Badges b){power = &b;}
    void setRace(RaceBanners rb){ race = &rb;}
    void showSheet();
    
private:
    //regions
    //use vectors
    Tokens* availTokens;
    Badges* power;
    RaceBanners* race;
    
};

#endif /* Player_hpp */
