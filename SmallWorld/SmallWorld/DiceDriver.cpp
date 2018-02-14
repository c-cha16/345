//
//  main.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-07.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include <iostream>
#include "Dice.hpp"
using namespace std;

//DRIVER for dice
int main(int argc, const char * argv[]) {
    Dice* d1 = new Dice();
    Dice* d2 = new Dice();
    int tokens = 50;
    int regionTokens[] = {1,2,3,4,5,6,7};
    
    d1->rollingDice(tokens, regionTokens[1]);
    d2->rollingDice(tokens, regionTokens[6]);
    
    
    
    return 0;
}
