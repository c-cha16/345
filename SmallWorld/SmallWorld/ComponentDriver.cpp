//
//  main.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-07.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include <iostream>
#include "AllComponents.h"
#include "Player.hpp"
#include "Region.hpp"
#include "Dice.hpp"
#include "MapLoader.hpp"
#include <fstream>
#include "GameStart.hpp"
using namespace std;
/*
int main(int argc, const char * argv[]) {
    AllComponents* ac = new AllComponents();
    
    ac->createCoins();
    ac->showBank();
    cout << "=======================" <<endl;
    ac->createBanners();
    ac->showBanners();
    cout << "=======================" <<endl;
    ac->createGamePieces();
    ac->createTokens();
    ac->showTokens();
    ac->showGamePieces();
    cout << "=======================" <<endl;
    
    ac->createBadges();
    ac->showBadges();
    cout << "=======================" <<endl;
    delete ac;
    ac = nullptr;
    Badges* b1 = new Badges("Alchemist", 4, "+2 coins at the end of every end your race has not gone into decline yet");
    RaceBanners* rb1 = new RaceBanners("Humans", 5, "FarmLand Region");
    Badges* b2 = new Badges("Beserk", 4, "Use renforcement die");
    RaceBanners* rb2 = new RaceBanners("Dwarves", 3, "Mining Region");
    Region* r1 = new Region(5,"Forest");
    Region* r2 = new Region(3, "Plains");
    Player* p1 = new Player(1);
    Player* p2 = new Player(2);
    p1->setBadge(*b1);
    p1->setRace(*rb1);
    p2->setBadge(*b2);
    p2->setRace(*rb2);
    p1->addRegion(*r1);
    p1->addRegion(*r2);
    p1->addRegion(*r2);
    p1->addRegion(*r2);
    p1->addRegion(*r1);
    p1->addRegion(*r1);
    p1->showSheet();
    p2->showSheet();
    
    Dice* d1 = new Dice();
    Dice* d2 = new Dice();
    p1->addDice(*d1);
    p2->addDice(*d2);
    //p1->roll(35, 2);
    //p2->roll(30, 1);
    
    delete b1;
    b1 = nullptr;
    delete b2;
    b2 = nullptr;
    delete p1;
    p1 = nullptr;
    delete p2;
    p2 = nullptr;
    delete d1;
    d1 =nullptr;
    delete d2;
    d2 =nullptr;
    
    MapLoader* mp = new MapLoader();
    cout<<"Enter Map name"<<endl;
    string mapName;
    cin >> mapName;
    cin.clear();
    cin.ignore();
    mp->readFile(mapName);
    Maps* map = mp->getMap();
    cout << "=======================" <<endl;
    cout <<"Size: "<< mp->size()<<endl;
    cout << "=======================" <<endl;
    map->vertices();
    //cout << "=======================" <<endl;
    map->incidentEdges(0);
    map->incidentEdges(1);
    map->incidentEdges(2);
    map->incidentEdges(3);
    map->incidentEdges(4);
    map->BFS(0);
    delete mp;
    mp = nullptr;
    //delete map;
    map = nullptr;
     
    return 0;
     
}
*/
int main(){
    GameStart* game = new GameStart();
    
    Maps* map = game->map(game->run());
    
    
    
    cout << "=======================" <<endl;
    cout <<"Size: "<< map->size()<<endl;
    cout << "=======================" <<endl;
    map->vertices();
    //cout << "=======================" <<endl;
    map->incidentEdges(0);
    map->BFS(0);
}
