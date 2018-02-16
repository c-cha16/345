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
Node::Node(string s){
    name = s;
}
Node::~Node(){
    
}
void Maps::addNode(string s){
    map.push_back(Node(s));
}
void Node::addEdge(Edge* e){
    edge1 = e;
}
