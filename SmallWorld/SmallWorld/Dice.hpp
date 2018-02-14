//
//  Dice.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-13.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef Dice_hpp
#define Dice_hpp

#include <stdio.h>
using namespace std;


class Dice{
    int container [4] = {0};
private:
    
public:
    
    Dice();
    ~Dice();
    void rollingDice(int tokens, int regionTokens);
    int random();
    void storeResults(int i);
    void percentage();
    int getdiceResult();
    
};
#endif /* Dice_hpp */
