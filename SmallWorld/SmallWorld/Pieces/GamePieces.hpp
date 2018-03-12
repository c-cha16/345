//
//  GamePieces.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef GamePieces_hpp
#define GamePieces_hpp
#include "MapObjects.hpp"
#include <string>
using namespace std;

#include <stdio.h>

enum class MapPieces { TrollLair, Mountain, Fortress, Encampment, HoleInGround, Hero, Dragon};

class GamePieces : public MapObjects{
public:
    GamePieces();
    ~GamePieces();
    GamePieces(char c);
    string getType(){ return name;}
    void setType(string s){ name = s;}
private:
    string name;
    MapPieces type;
    
};

#endif /* GamePieces_hpp */
