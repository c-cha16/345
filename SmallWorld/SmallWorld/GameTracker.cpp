//
//  GameTracker.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-03-06.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "GameTracker.hpp"

GameTracker::GameTracker(){
    currentTurn = 1;
    
}
GameTracker::~GameTracker(){
    
}
bool GameTracker::checkLastTurn(){
    cout << currentTurn<< "*"<<endl;
    cout << maxTurn << "*"<<endl;
    
    if(maxTurn == currentTurn){
        return true;
    }
    return false;
}
void GameTracker::setNumPlayers(int n){
    //From the input of number of player, the game tracker will know how many turns it will be
    numPlayers = n;
    switch (n) {
        case 2:
            maxTurn = 10;
            break;
            
        case 3:
            maxTurn = 10;
            break;
        case 4:
            maxTurn = 9;
            break;
        case 5:
            maxTurn = 8;
            break;
    }
}
