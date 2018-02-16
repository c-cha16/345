//
//  Dice.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-15.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef Dice_hpp
#define Dice_hpp
using namespace std;
#include <stdio.h>

class Dice{
public:
    Dice();
    ~Dice();
    void rollingDice(int tokens, int regionTokens);
    int random();
    void storeResults(int i);
    void percentage();
    int getdiceResult();
private:
    float container [4] = {0};
    int diceResult;
};
#endif /* Dice_hpp */
