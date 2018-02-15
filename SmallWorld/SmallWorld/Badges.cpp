//
//  Badges.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "Badges.hpp"

Badges::Badges(){
    name = "";
    tokenAmt =0;
}
Badges::Badges(string s, int n){
    name = s;
    tokenAmt =n;
}
Badges::~Badges(){
    
}
