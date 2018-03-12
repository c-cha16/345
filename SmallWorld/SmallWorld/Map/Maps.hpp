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
#include "GamePieces.hpp"
#include "Tokens.hpp"
#include <iostream>

using namespace std;

class Node{
public:
    Node(string s);
    Node(int n,string s);
    ~Node();
    string name;
    vector <Edge> edgeL;
    void addEdge(Edge* e);
    int order; //unused right now
    void addPiece(char c);
    void addToken(char c);
    int sumTokens();
    void showPieces();
    void showTokens();
private:
    vector <Tokens> tokens;
    vector <GamePieces> pieces;
};

class Maps{
public:
    Maps();
    Maps& operator =(const Maps &rightside);
    ~Maps();
    void addNode(int n, string s);
    void incidentEdges(int n);
    void vertices(); //To be added
    void connectEdges(int x, int y);
    vector<Node> getNodeVector(){ return map;}
    int size(){return map.size();}
    bool BFS(int s);
    void clear(){map.clear();}
    void addPiece(int n, char c);
    void addToken(int n, char c);
    int sumTokens(int n);

    
private:
    vector<Node> map;
    
};


#endif /* Maps_hpp */
