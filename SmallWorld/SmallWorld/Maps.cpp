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
        cout << i+1<<". "<<map[n].edgeL[i].name << " (#" <<map[n].edgeL[i].getNumReg() <<")"<< endl;
    }
    cout<<endl;
}
bool Maps::checkVisit(){
    for (int i = 0; i<map.size(); i++) {
        if(!map[i].getVisit()){
            cout<<"FAILED BFS"<<endl;
            return false;
        }
    }
    return true;
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
    edgeL.clear();
}

void Node::addEdge(Edge* e){
    edgeL.push_back(*e);
}
