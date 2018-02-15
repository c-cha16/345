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
class GamePieces : public MapObjects{
public:
    GamePieces();
    ~GamePieces();
    GamePieces(string s);
    string getType(){ return type;}
    void setType(string s){ type = s;}
private:
    string type;
};

#endif /* GamePieces_hpp */
