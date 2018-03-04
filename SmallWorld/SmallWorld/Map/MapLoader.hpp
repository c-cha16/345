//
//  MapLoader.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef MapLoader_hpp
#define MapLoader_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Maps.hpp"

using namespace std;

class MapLoader{
public:
    MapLoader();
    ~MapLoader();
    void readFile(string s);
    vector<string> split(const string &s, char delim);
    Maps* getMap(){ return map;}
    int size(){return map->size();}
    void clear(){map->clear();}
private:
    Maps* map;
};


#endif /* MapLoader_hpp */
