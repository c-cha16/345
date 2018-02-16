//
//  Maps.hpp
//  SmallWorld
//
//  Created by Marco Sassano on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef Maps_hpp
#define Maps_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include "Edge.hpp"

using namespace std;

class Node{
public:
    Node(string s);
    ~Node();
    string name;
    Edge* edge1;
    void addEdge(Edge* e);
};

class Maps{
public:
    Maps();
    ~Maps();
    void addNode(string s);
    string* incidentEdges();
    void vertices(); //To be added
private:
    vector<Node> map;
};


#endif /* Maps_hpp */
