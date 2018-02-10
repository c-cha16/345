//
//  Region.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-09.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

//#include "Region.hpp"
#include <iostream>
using namespace std;
#include <boost/config.hpp>
#include <boost/graph/adjacency_matrix.hpp>
#include <boost/graph/graph_utility.hpp>



int main(){
    enum { A, B, C, D, E, F, N };
    using namespace boost;
    const char* name = "ABCDEF";
    typedef adjacency_matrix<undirectedS> UGraph;
    
    UGraph ug(N);
    add_edge(B, C, ug);
    add_edge(B, F, ug);
    add_edge(C, A, ug);
    add_edge(D, E, ug);
    add_edge(F, A, ug);
    
    cout << "vertex set: ";
    print_vertices(ug, name);
    cout << endl;
    
    cout << "edge set: ";
    print_edges(ug, name);
    cout << endl;
    
    cout << "incident edges: " << endl;
    print_graph(ug, name);
    cout << endl;
    
    return 0;
}
