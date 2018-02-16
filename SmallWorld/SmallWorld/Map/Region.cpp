//
//  Region.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "Region.hpp"

Region::Region(){
    owner = "";
    tokens = 0;
}
Region::Region(Region const &r){
    owner = r.owner;
    tokens = r.tokens;
}
Region::Region(int toks, string own){
    owner = own;
    tokens = toks;
}
Region::~Region(){
    
}


