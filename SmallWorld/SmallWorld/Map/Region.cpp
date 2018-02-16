//
//  Region.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "Region.hpp"
Region::Region(){
    typedef basic_string<char> string;
    owner = "default";
    tokens = 0;
}
Region::~Region(){
    
}

Region::Region(int toks, string own){
    owner = own;
    tokens = toks;
}
