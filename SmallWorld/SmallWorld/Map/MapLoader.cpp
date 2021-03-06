//
//  MapLoader.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "MapLoader.hpp"
#include <vector>
#include <sstream>
#include<stdlib.h>


MapLoader::MapLoader(){
    map = new Maps();
}
MapLoader::~MapLoader(){
    delete map;
    map = NULL;
}
void MapLoader::readFile(string s){
//    ofstream myfile ("exampleXXX.txt");
//    if (myfile.is_open()){
//        myfile << "This is a line.\n";
//        myfile << "This is another line.\n";
//        myfile.close();
//    }
//    else cout << "Unable to open file";
    ifstream fin(s);
    if(!fin){
        cerr << "Can't open file " << s << endl;
        exit( -1 );
    }
    string line, tempStr, lineTemp;
    int temp = 0;
    int x = 0;
    int  y = 0;
    int  z = 0;
    vector <string> v;
    vector <string> newVector;
    while(getline(fin, line)) {
        // here you can check if line contains the string
        // you're looking for or a string with a # at the end
        // or whatever
        //getline(fin,line,'#');
        if(line != ""){
            tempStr = line;
            //cout << line << endl;
        }
        if(line == ""){
            tempStr = line;
            //cout << line << endl;
            temp = 0;
        }
        if(temp == 1){
            v = split(tempStr, ' ');
            if(v.size()>1){
                lineTemp = v[1];
                x++;
                map->addNode(x, lineTemp);
                v.clear();
                line.clear();
            }
        }
        if(temp == 2){
            newVector = split(tempStr, ' ');
            //cout<<"size: " << newVector.size()<<endl;
            for (int i=1; i<newVector.size(); i++) {
                stringstream ss1(newVector[i]);
                stringstream ss2(newVector[0]);
                ss1 >> y;
                ss2 >> z;
                //cout<<"(" << z <<", ";
                //cout << y <<")"<<endl;
                map->connectEdges(z-1, y-1);
                ss1.clear();
                ss1.ignore();
                ss2.clear();
                ss2.ignore();
            }
            newVector.clear();
        }
        if(line[1]=='b'&&line[0]=='['){
            temp = 2;
        }
        if(line[3] == 'u'&&line[0]=='['){
            temp = 1;
        }
        v.clear();

        line = "";
        line.clear();
    }
    fin.close();
    
}
vector<string> MapLoader::split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}
