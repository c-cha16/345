//
//  Tokens.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef Tokens_hpp
#define Tokens_hpp
#include <string>
#include "MapObjects.hpp"
#include <stdio.h>

using namespace std;

class Tokens: public MapObjects{ //14 races + lost tribe
public:
    Tokens();
    ~Tokens();
    Tokens(string s);
    string getRace(){ return race; }
    void setRace(string s){ race=s; };
private:
    string race;
};

#endif /* Tokens_hpp */
