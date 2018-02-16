//
//  MapLoader.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "MapLoader.hpp"


MapLoader::MapLoader(){
    
}
MapLoader::~MapLoader(){
    
}
void MapLoader::readFile(string s){
    ofstream myfile ("exampleXXX.txt");
    if (myfile.is_open()){
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        myfile.close();
    }
    else cout << "Unable to open file";
    
    ifstream fin(s);
    if(!fin){
        cerr << "Can't open file " << s << endl;
        exit( -1 );
    }
    
    string line;
    while(getline(fin, line)) {
        // here you can check if line contains the string
        // you're looking for or a string with a # at the end
        // or whatever
        getline(fin,line,'#');
        cout << line << endl;
    }
    
    fin.close();
}
