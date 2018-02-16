//
//  Edge.cpp
//  SmallWorld
//
//  Created by Marco Sassano on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "Edge.hpp"

Edge::Edge(string s){
    name = s;
}
//Not sure if I did this right
Edge::~Edge(){
    
}
void Edge::addEdge(Edge* e){
    nextEdge = e;
}
