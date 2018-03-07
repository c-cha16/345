//
//  GameStart.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-03-04.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef GameStart_hpp
#define GameStart_hpp

#include <stdio.h>
#include "MapLoader.hpp"
#include "boost/filesystem.hpp"   // includes all needed Boost.Filesystem declarations
#include <iostream>               // for std::cout
#include <string>

using namespace std;
using namespace boost::filesystem;

class GameStart{
public:
    GameStart();
    ~GameStart();
    void setNumPlayers();
    int getNumPlayer();
    void runPlayers();
    void runMap();
    void clearMap();
    Maps* returnMap(){
        return mp->getMap();
    }
private:
    int numPlayers;
    MapLoader* mp;
    
};

#endif /* GameStart_hpp */
