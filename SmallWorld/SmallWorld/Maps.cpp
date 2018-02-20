//
//  Maps.cpp
//  SmallWorld
//
//  Created by Marco Sassano on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include <iostream>
#include "Maps.hpp"
#include "Edge.hpp"

Maps::Maps(){
    
}
//Not sure if I did this right
Maps::~Maps(){
  
}
void Maps::vertices(){
    cout << "Map(vertices):" << endl;
    for (int i = 0; i<map.size(); i++) {
        cout <<"#"<<i+1<< " "<<map[i].name <<endl;
    }
    cout << endl;
}
void Maps::incidentEdges(int n){
    
    cout << "----------------------------"<<endl;
    cout << map[n].name << " ";
    cout << "Adjacent Places:"<<endl;
    for (int i = 0; i<map[n].edgeL.size(); i++) {
        cout << i+1<<". "<<map[n].edgeL[i].name << endl;
    }
    cout<<endl;
}
void Maps::addNode(int n, string s){
    map.push_back(Node(n, s));
}
void Maps::connectEdges(int x, int y){
    Edge* e1 = new Edge(map[y].name);
    map[x].addEdge(e1);
    cout << "(" << map[x].name << ", " << map[y].name << ")" << endl;
    e1 = nullptr;
}
Node::Node(string s){
    name = s;
}

Node::Node(int n, string s){
    order = n;
    name = s;
}
Node::~Node(){
    //delete map;
    edgeL.clear();
}

void Node::addEdge(Edge* e){
    edgeL.push_back(*e);
}
