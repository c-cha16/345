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

using namespace std;

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
    //add Badges
    
    
    cout << "=======================" <<endl;
    delete ac;
    ac = nullptr;
    Badges* b1 = new Badges("Alchemist", 4, "+2 coins at the end of every end your race has not gone into decline yet");
    RaceBanners* rb1 = new RaceBanners("Humans", 5, "FarmLand Region");
    Badges* b2 = new Badges("Beserk", 4, "Use renforcement die");
    RaceBanners* rb2 = new RaceBanners("Dwarves", 3, "Mining Region");
    
    Player* p1 = new Player();
    Player* p2 = new Player();
    p1->setBadge(*b1);
    p1->setRace(*rb1);
    p2->setBadge(*b2);
    p2->setRace(*rb2);
    p1->showSheet();
    p2->showSheet();
    
    delete b1;
    b1 = nullptr;
    delete b2;
    b2 = nullptr;
    delete p1;
    p1 = nullptr;
    delete p2;
    p2 = nullptr;
    return 0;
}
