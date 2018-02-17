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
    Node(int n,string s);
    ~Node();
    string name;
    vector <Edge> edgeL;
    void addEdge(Edge* e);
    int order;
};

class Maps{
public:
    Maps();
    ~Maps();
    void addNode(int n, string s);
    void incidentEdges(int n);
    void vertices(); //To be added
    void connectEdges(int x, int y);
    vector<Node> getNodeVector(){ return map;}
private:
    vector<Node> map;
};


#endif /* Maps_hpp */
