//
//  main.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-07.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include <iostream>
#include "AllComponents.h"

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
    
    delete ac;
    ac = nullptr;
    return 0;
}
