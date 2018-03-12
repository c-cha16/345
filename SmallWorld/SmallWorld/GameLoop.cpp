//
//  GameLoop.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-03-06.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "GameLoop.hpp"
GameLoop::GameLoop(int n){
    //Constructor
    GameTracker gt = *new GameTracker();
    gt.setNumPlayers(n);
    cout << "Total number of players: " << n << endl;
    numPlayers = n;
    maxNumTurns = gt.getMaxTurn();
    //added just for DEMO CASE
    cout << "Total number of turns: " << maxNumTurns << endl << endl;
    for(int i = 1; i<n+1; i++){
        // increased size by 1 so that the first number is 1
        allPlayers.push_back(Player(i));
    }
    for (int i = 0; i<n; i++) {
        allPlayers[i].setVP(10*i);
    }
}
GameLoop::~GameLoop(){
    for(int i = 0; i<numPlayers;i++){
        allPlayers.pop_back();
    }
}
void GameLoop::firstRun(){
    //First move for all players has picks_race
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
    //main function to run, will only stop when it is the last turn
    cout <<"Main loop running"<<endl;
    bool exit = true;
    while (exit) {
        gt.addTurn();
        cout << "Current Turn is" << gt.getCurrentTurn() << endl;
        //cout << "Last turn is " <<maxNumTurns << endl;
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
    //this method will iterate through the players and search for which player has the most points
    cout << "Max turn has been reached, winner found to be: "<< endl;
    vector <Player> :: iterator it;
    int maxVP = 0;
    int tempVP = 0;
    int counter = 0;
    int postionWinner = 0;
    for (it = allPlayers.begin(); it != allPlayers.end(); ++it) {
        tempVP = it->getVP();
        if(tempVP > maxVP){
            maxVP = tempVP;
            postionWinner = counter;
        }
        counter ++;
    }
    cout << "Winner is .... " << "Player "<<allPlayers[postionWinner].getID() <<endl;
    cout << "with .... " << maxVP << " points"<<endl;
    cout <<endl;
}
