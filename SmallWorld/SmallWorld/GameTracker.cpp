//
//  GameTracker.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-03-06.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "GameTracker.hpp"

GameTracker::GameTracker(){
    
}
GameTracker::GameTracker(int n){
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
GameTracker::~GameTracker(){
    
}
