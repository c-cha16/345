//
//  Edge.hpp
//  SmallWorld
//
//  Created by Marco Sassano on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef Edge_hpp
#define Edge_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Edge{
public:
    Edge(string s);
    ~Edge();
    string name;
    void addEdge(Edge* e);
private:
    Edge* nextEdge;
};

#endif /* Edge_hpp */
