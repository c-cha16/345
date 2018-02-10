//
//  Region.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-09.
//  Copyright © 2018 Charles Chan. All rights reserved.
//
#include <string>
#include "Region.hpp"
#include <iostream>
using namespace std;
#include <boost/config.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/graph_utility.hpp>

Region::Region(){
    typedef basic_string<char> string;
    owner = "default";
    tokens = 0;
}
Region::~Region(){
    
}

Region::Region(int toks, string own){
    owner = own;
    tokens = toks;
}
struct Edge{ };

int main(){
    enum { A, B, C, D, E, F, N };
    using namespace boost;
    const char* name = "ABCDEF";
//    typedef adjacency_list<vecS, vecS, directedS, property<vertex_my_custom_class_t, shared_ptr<my_custom_class>>> graph_t;
//    
//    typedef boost::graph_traits<graph_t>::vertex_descriptor vertex_t;
//    //typedef adjacency_matrix<undirectedS> UGraph;
//    
//    Region* ar1 = new Region();
//    Region* br2 = new Region();
//    Region* cr3 = new Region();
//    Region* dr4 = new Region();
//    Region* er5 = new Region();
//    Region* fr6 = new Region();
//    
//    UGraph ug(6);
//    add_edge(br2, cr3, ug);
//    add_edge(br2, fr6, ug);
//    add_edge(cr3, ar1, ug);
//    add_edge(dr4, er5, ug);
//    add_edge(fr6, ar1, ug);
    
    cout << "vertex set: ";
//    print_vertices(ug, name);
//    cout << endl;
//
//    cout << "edge set: ";
//    print_edges(ug, name);
//    cout << endl;
//
//    cout << "incident edges: " << endl;
//    print_graph(ug, name);
//    cout << endl;
    
    return 0;
}
