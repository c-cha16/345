//
//  GamePieces.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//
#include "GamePieces.hpp"
#include <iostream>


GamePieces::GamePieces(){
    name = "";
}

GamePieces::GamePieces(char c){
    //name = s;
    //MapPieces temp = name;
    switch(c){
        case 'T':
            cout << "Troll Lair\n";
            type = MapPieces::TrollLair;
            name = "Troll Lair";
            break;
        case 'M' :
            cout << "Mountain\n";
            type = MapPieces::Mountain;
            name = "Mountain";
            break;
        case 'F' :
            cout << "Fort\n";
            type = MapPieces::Fortress;
            name = "Fort";
            break;
        case 'C' :
            cout << "Encampment\n";
            type = MapPieces::Encampment;
            name = "Encampment";
            break;
        case 'G' :
            cout << "Hole in the Ground\n";
            type = MapPieces::HoleInGround;
            name = "Hole in the Ground";
            break;
        case 'H' :
            cout << "Hero\n";
            type = MapPieces::Hero;
            name = "Hero";
            break;
        case 'D' :
            cout << "Dragon\n";
            type = MapPieces::Dragon;
            name = "Dragon";
            break;
    }
}

GamePieces::~GamePieces(){
    
}
