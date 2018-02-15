//
//  main.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-07.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include <iostream>
#include "AllComponents.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    AllComponents* ac = new AllComponents();
    
    ac->createCoins();
    
    ac->showBank();
    
    return 0;
}
