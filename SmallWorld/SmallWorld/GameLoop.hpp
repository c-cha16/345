//
//  GameLoop.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-03-06.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef GameLoop_hpp
#define GameLoop_hpp

#include "GameTracker.hpp"
#include "Player.hpp"
#include <vector>
#include <stdio.h>

class GameLoop{
public:
    GameLoop(int n);
    ~GameLoop();
    int getNumPlayers() const {return numPlayers;}
    int getMaxNumTurns() const {return maxNumTurns;}
    void firstRun();
    void mainRun();
    void findWinner();
private:
    int numPlayers;
    int maxNumTurns;
    vector<Player> allPlayers;
    GameTracker gt;
};

#endif /* GameLoop_hpp */
