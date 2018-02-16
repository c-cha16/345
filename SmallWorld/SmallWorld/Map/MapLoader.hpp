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

using namespace std;

class MapLoader{
public:
    MapLoader();
    ~MapLoader();
    void readFile(string s);
private:
    
};


#endif /* MapLoader_hpp */
