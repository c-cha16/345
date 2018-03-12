//
//  Tokens.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "Tokens.hpp"

Tokens::Tokens(){
    name = "";
}
Tokens::Tokens(char c){
    switch(c){
        case 'A':
            cout << "Amazons\n";
            race = TokenRace::Amazons;
            name = "Amazons";
            break;
        case 'D' :
            cout << "Dwarves\n";
            race = TokenRace::Dwarves;
            name = "Dwarves";
            break;
        case 'E' :
            cout << "Elves\n";
            race = TokenRace::Elves;
            name = "Elves";
            break;
        case 'G' :
            cout << "Ghouls\n";
            race = TokenRace::Ghouls;
            name = "Ghouls";
            break;
        case 'i' :
            cout << "Giants\n";
            race = TokenRace::Giants;
            name = "Giants";
            break;
        case 'H' :
            cout << "Halfings\n";
            race = TokenRace::Halfings;
            name = "Halfings";
            break;
        case 'u' :
            cout << "Humans\n";
            race = TokenRace::Humans;
            name = "Humans";
            break;
        case 'R' :
            cout << "Ratmen\n";
            race = TokenRace::Ratmen;
            name = "Ratmen";
            break;
        case 'O' :
            cout << "Orcs\n";
            race = TokenRace::Orcs;
            name = "Orcs";
            break;
        case 'S' :
            cout << "Skeletons\n";
            race = TokenRace::Skeletons;
            name = "Skeletons";
            break;
        case 'o' :
            cout << "Sorcerers\n";
            race = TokenRace::Sorcerers;
            name = "Sorcerers";
            break;
        case 'T' :
            cout << "Tritons\n";
            race = TokenRace::Tritons;
            name = "Tritons";
            break;
        case 'r' :
            cout << "Trolls\n";
            race = TokenRace::Trolls;
            name = "Trolls";
            break;
        case 'W' :
            cout << "Wizards\n";
            race = TokenRace::Wizards;
            name = "Wizards";
            break;
        case 'L' :
            cout << "Lost Tribe\n";
            race = TokenRace::Lost;
            name = "Lost Tribe";
            
    }
}
Tokens::~Tokens(){
    
}
