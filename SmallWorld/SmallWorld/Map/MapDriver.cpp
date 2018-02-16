//
//  MapDriver.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include "Region.hpp"

using namespace std;

#include <boost/config.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/graph_utility.hpp>
#include <boost/graph/undirected_graph.hpp>
#include <boost/graph/graph_as_tree.hpp>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/vertex_and_edge_range.hpp>
#include <boost/graph/graph_archetypes.hpp>

/*
int main(){
    using namespace boost;
    struct first_name_t {
        typedef vertex_property_tag kind;
    };
    typedef property<first_name_t, std::string> FirstNameProperty;
    typedef adjacency_list<vecS, vecS, UndirectedS, FirstNameProperty> MyGraphType;
    
    typedef pair<int,int> Pair;
    Pair edge_array[11] = { Pair(0,1), Pair(0,2), Pair(0,3),
        Pair(0,4), Pair(2,0), Pair(3,0),
        Pair(2,4), Pair(3,1), Pair(3,4),
        Pair(4,0), Pair(4,1) };
    /*
    enum { A, B, C, D, E, F, N };
    const char* name = "ABCDEF";
     typedef adjacency_list<vecS, vecS, directedS, property<vertex_my_custom_class_t, shared_ptr<my_custom_class>>> graph;
    
    typedef boost::graph_traits<graph>::vertex_descriptor vertex_t;
    typedef is_adjacency_matrix<undirectedS> UGraph;
     */

        Region* ar1 = new Region();
        Region* br2 = new Region();
        Region* cr3 = new Region();
        Region* dr4 = new Region();
        Region* er5 = new Region();
        Region* fr6 = new Region();

        UGraph ug(6);
        add_edge(br2, cr3, ug);
        add_edge(br2, fr6, ug);
        add_edge(cr3, ar1, ug);
        add_edge(dr4, er5, ug);
        add_edge(fr6, ar1, ug);

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
*/
