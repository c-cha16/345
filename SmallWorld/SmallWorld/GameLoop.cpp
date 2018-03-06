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
    for(int i = 1; i<n+1; i++){
        // increased size by 1 so that the first number is 1
        allPlayers.push_back(Player(i));
    }
}
GameLoop::~GameLoop(){
    for(int i = 0; i<numPlayers;i++){
        allPlayers.pop_back();
    }
    gt = NULL;
}
void GameLoop::firstRun(){
    cout <<"1st run"<<endl;
    for(int i = 0; i < numPlayers; i++){
        allPlayers[i].picks_race();
        allPlayers[i].conquers();
        allPlayers[i].scores();
    }
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
