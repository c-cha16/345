//
//  GameLoop.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-03-06.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "GameLoop.hpp"
GameLoop::GameLoop(int n){
    GameTracker gt = *new GameTracker(n);
    cout << "Total number of players: " << n << endl;
    maxNumTurns = gt.getMaxTurn();
    cout << "Total number of turns: " << maxNumTurns << endl << endl;
}
GameLoop::~GameLoop(){
    gt = NULL;
}
void GameLoop::firstRun(){
    cout <<"1st run"<<endl;
    
    cout <<endl;
}
void GameLoop::mainRun(){
    cout <<"Main loop running"<<endl;
    
    cout <<endl;
}
void GameLoop::findWinner(){
    cout << "Max turn has been reached, winner found to be: "<< endl;
    
    cout <<endl;
}
