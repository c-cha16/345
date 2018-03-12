//
//  GameStart.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-03-04.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "GameStart.hpp"

GameStart::GameStart(){
    mp = new MapLoader();
}
GameStart::~GameStart(){
    delete mp;
    mp = NULL;
}
void GameStart::runPlayers(){
    //method to get the number of players
    int temp = 0;
    bool stay = true;
    do{
        cout<<"How many players?"<<endl;
        cin >> temp;
        cin.clear();
        cin.ignore();
        if(temp < 6 && temp > 1){
            stay = false;
        }
    }while(stay);
    numPlayers = temp;

}
void GameStart::runMap(){
    //User can select from a choice of maps, then method
    //checks validity for them before moving forward
    Maps* tempMap;
    do{
        path p (".");
        cout << endl<<"Please enter one of the following maps"<<endl;
        directory_iterator end_itr;
        // cycle through the directory
        for (directory_iterator itr(p); itr != end_itr; ++itr){
            if (is_regular_file(itr->path())) {
                string currentFile = itr->path().string();
                string correctFile = currentFile.substr(2,currentFile.size()-1);
                cout << correctFile << endl;
            }
        }
        cout<<endl;
        string mapName;
        cin >> mapName;
        cin.clear();
        cin.ignore();
        
        mp->readFile(mapName);
        tempMap = mp->getMap();
        if(tempMap->BFS(0)){
            tempMap = NULL;
            return;
        }
        tempMap->clear();
        tempMap = NULL;
    }while(true);
}

void GameStart::clearMap(){
    mp->clear();
}
