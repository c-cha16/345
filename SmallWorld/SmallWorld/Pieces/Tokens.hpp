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
#include <iostream>

using namespace std;
enum class TokenRace { Amazons, Dwarves, Elves, Ghouls, Ratmen, Skeletons, Tritons, Giants, Halfings, Humans, Orcs, Sorcerers, Trolls, Wizards, Lost};

class Tokens: public MapObjects{ //14 races + lost tribe
    
public:
    Tokens();
    ~Tokens();
    Tokens(char c);
    string getRace(){ return name; }
    void setRace(string s){ name=s; };
private:
    string name;
    TokenRace race;
};

#endif /* Tokens_hpp */
