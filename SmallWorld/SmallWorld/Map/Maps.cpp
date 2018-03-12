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
#include <iterator>
#include <list>

Maps::Maps(){

}
Maps& Maps::operator =(const Maps &rightside){
    this->map = rightside.map;
    return *this;
}
Maps::~Maps(){
    int n = map.size();
    for (int i =0; i>n; i++) {
        map.pop_back();
    }
}
void Maps::addPiece(int n, char c){
    //method to add game pieces
    map[n].addPiece(c);
}
void Maps::addToken(int n, char c){
    //method to add tokens
    map[n].addToken(c);
}
int Maps::sumTokens(int n){
    //method to return total pts in a region n
    return map[n].sumTokens();
}

void Maps::vertices(){
    cout << "Map(vertices):" << endl;
    for (int i = 0; i<map.size(); i++) {
        cout <<"#"<<i+1<< " "<<map[i].name << endl;
        map[i].showTokens();
        map[i].showPieces();
    }
    cout << endl;
}
void Maps::incidentEdges(int n){
    
    cout << "----------------------------"<<endl;
    cout << map[n].name << " ";
    cout << "Adjacent Places:"<<endl;
    for (int i = 0; i<map[n].edgeL.size(); i++) {
        cout << i+1<<". "<<map[n].edgeL[i].name << " (#" <<map[n].edgeL[i].getNumReg() <<")"<< endl;
    }
    cout<<endl;
}

void Maps::addNode(int n, string s){
    map.push_back(Node(n, s));
}
void Maps::connectEdges(int x, int y){
    Edge* e1 = new Edge(map[y].name);
    e1->setNumReg(y+1);
    map[x].addEdge(e1);
    //cout << "(" << map[x].name << ", " << map[y].name << ")" << endl;
    e1 = nullptr;
}
bool Maps::BFS(int s){//index number
    // Mark all the vertices as not visited
    bool *visited = new bool[map.size()];
    for(int i = 0; i < map.size(); i++){
        visited[i] = false;
    }
    // Create a queue for BFS
    list<int> queue;
    
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);
    
    // 'i' will be used to get all adjacent
    // vertices of a vertex
    vector<int>::iterator i;
    vector<Edge>::iterator it;
    while(!queue.empty()){
        // Dequeue a vertex from queue and print it
        s = queue.front();
        //cout << s << " ";
        queue.pop_front();
        
        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (it = map[s].edgeL.begin(); it != map[s].edgeL.end(); ++it){
            int temp = it->getNumReg()-1;
            if(!visited[temp]){
                visited[temp] = true;
                queue.push_back(temp);
            }
        }
    }
    
    //delete objects!!!!!
    for(int i = 0; i < map.size(); i++){
        if(!visited[i]){
            cout << "Invalid Map: not a connected graph"<<endl;
            delete[] visited;
            *visited = nullptr;
            return false;
        }
    }
    delete[] visited;
    *visited = nullptr;
    return true;
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
    for(int i = 0; i < edgeL.size();i++){
        edgeL.pop_back();
    }
    for (int i = 0; i < pieces.size(); i++) {
        pieces.pop_back();
    }
    
}
int Node::sumTokens(){
    //method to return total tokens in a region
    //int temp = 0;
    return tokens.size();
}
void Node::addEdge(Edge* e){
    edgeL.push_back(*e);
}

void Node::addPiece(char c){
    //adds game piece to region
    pieces.push_back(GamePieces(c));
}

void Node::addToken(char c){
    //adds token to region
    tokens.push_back(Tokens(c));
}
void Node::showPieces(){
    cout << "size: " <<pieces.size() <<endl;
    for (int i = 0; i<pieces.size(); i++) {
        string temp = pieces[i].getType();
        cout << temp << endl;
        cout << i<< endl;
        temp.clear();
    }
    
}
void Node::showTokens(){
    cout << "size: " <<tokens.size() <<endl;
    for (int i = 0; i<tokens.size(); i++) {
        string temp = tokens[i].getRace();
        cout << tokens[i].getRace() << endl;
        temp.clear();
    }
}
