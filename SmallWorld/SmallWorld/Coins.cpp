//
//  Coins.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "Coins.hpp"
using namespace std;

// 1, 3, 5, 10
Coins::Coins(){
    tokenCount++;
}
Coins::Coins(int v){
    value = v;
    tokenCount++;
}
Coins::~Coins(){
    
}


