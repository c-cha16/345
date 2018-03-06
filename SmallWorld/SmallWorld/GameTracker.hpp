//
//  GameTracker.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-03-06.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef GameTracker_hpp
#define GameTracker_hpp

#include <vector>
#include "Player.hpp"
#include <stdio.h>

using namespace std;

class GameTracker{
public:
    GameTracker();
    GameTracker(int n);
    ~GameTracker();
    int getNumPlayers() const{return numPlayers;}
    void setNumPlayers(int n){numPlayers = n;}
    int getCurrentTurn() const{return currentTurn;}
    int getMaxTurn() const{return maxTurn;}
    void setMaxTurn(int m){maxTurn = m;}
    void addTurn(){currentTurn++;}
private:
    int currentTurn;
    int maxTurn;
    int numPlayers; //useless?
};
#endif /* GameTracker_hpp */
