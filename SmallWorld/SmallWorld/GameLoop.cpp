//
//  GameLoop.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-03-06.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "GameLoop.hpp"
GameLoop::GameLoop(int n){
    GameTracker gt = *new GameTracker();
    gt.setNumPlayers(n);
    cout << "Total number of players: " << n << endl;
    numPlayers = n;
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
}
void GameLoop::firstRun(){
    cout <<"1st run"<<endl;
    cout << gt.getCurrentTurn() << endl;
    for(int i = 0; i < numPlayers; i++){
        allPlayers[i].picks_race();
        allPlayers[i].conquers();
        allPlayers[i].scores();
    }
    cout <<endl;
}
void GameLoop::mainRun(){
    cout <<"Main loop running"<<endl;
    bool exit = true;
    while (exit) {
        gt.addTurn();
        cout << gt.getCurrentTurn() << endl;
        cout << maxNumTurns << endl;
        if(gt.getCurrentTurn() == maxNumTurns){
            exit = false;
        }
        for (int i = 0; i<numPlayers; i++) {
            allPlayers[i].conquers();
            allPlayers[i].scores();
        }
    }
    cout <<endl;
}
void GameLoop::findWinner(){
    cout << "Max turn has been reached, winner found to be: "<< endl;
    
    cout <<endl;
}
