//
//  Coins.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef Coins_hpp
#define Coins_hpp
#include <stdio.h>

class Coins{
public:
    Coins();
    Coins(int v);
    ~Coins();
    int getValue(){
        return value;
    }
    void setValue(int v){
        value = v;
    }
private:
    int value;
    static int tokenCount;
};

#endif /* Coins_hpp */
