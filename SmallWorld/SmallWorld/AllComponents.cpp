//
//  AllComponents.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "AllComponents.h"
#include <iostream>
#include "Tokens.hpp"
#include "RaceBanners.hpp"
#include "Coins.hpp"
#include "Badges.hpp"
#include "GamePieces.hpp"

AllComponents::AllComponents(){
    //components
        //done coins, banners
    bank = new Coins[109];
    raceHolder = new RaceBanners[14];
        //not done tokens, badges, pieces
    tokenHolder = new Tokens[186];
    pieceHolder = new GamePieces[35];
    
    badgeHolder = new Badges[20];
}
AllComponents::~AllComponents(){
    delete[] bank;
    bank = nullptr;
    
    delete[] raceHolder;
    raceHolder = nullptr;
    
    delete[] tokenHolder;
    tokenHolder = nullptr;
    delete[] pieceHolder;
    pieceHolder = nullptr;
    
    delete[] badgeHolder;
    badgeHolder = nullptr;
}
void AllComponents::createCoins(){
    char c;
    for (int i = 0; i<109; i++) {
        if(i<30){
            c = 'A';
        }else if(i<54){
            c = 'B';
        }else if(i<74){
            c = 'C';
        }else if(i<109){
            c = 'D';
        }
        switch (c) {
            case 'A':
                bank[i].setValue(10);
                break;
            case 'B':
                bank[i].setValue(5);
                break;
            case 'C':
                bank[i].setValue(3);
                break;
            case 'D':
                bank[i].setValue(1);
                break;
        }
    }
}
void AllComponents::showBank(){
    for(int i = 0; i<109; i++){
        cout << "Coin #" << i + 1 ;
        cout << " value = ";
        cout << bank[i].getValue() <<endl;
    }
}
void AllComponents::createBanners(){
    string* skill = new string[14];
    skill[0] = "amazonian skill";
    skill[1] = "dwarvian skill";
    skill[2] = "elfish skill";
    skill[3] = "ghoulish skill";
    skill[4] = "giantism skill";
    skill[5] = "Sorcerer's skill";
    skill[6] = "Boney skill";
    skill[7] = "Ratty skill";
    skill[8] = "Orca skill";
    skill[9] = "Normal skill";
    skill[10] = "Hobbit skill";
    skill[11] = "Triton skill";
    skill[12] = "Toll skill";
    skill[13] = "Wiz skill";
    
    string* names = new string[14];
    names[0] = "Amazons";
    names[1] = "Dwarves";
    names[2] = "Elves";
    names[3] = "ghouls";
    names[4] = "giants ";
    names[5] = "Sorcerers";
    names[6] = "Skeletons";
    names[7] = "RatMen";
    names[8] = "Orcs";
    names[9] = "Human";
    names[10] = "Halfings";
    names[11] = "Tritons";
    names[12] = "Trolls";
    names[13] = "Wizards";
    
    int* tokenStart = new int[14];
    tokenStart[0] = 6;
    tokenStart[1] = 3;
    tokenStart[2] = 6;
    tokenStart[3] = 5;
    tokenStart[4] = 6;
    tokenStart[5] = 5;
    tokenStart[6] = 6;
    tokenStart[7] = 8;
    tokenStart[8] = 5;
    tokenStart[9] = 5;
    tokenStart[10] = 6;
    tokenStart[11] = 6;
    tokenStart[12] = 5;
    tokenStart[13] = 5;
    
    for(int i=0; i<14;i++){
        raceHolder[i].setSkill(skill[i]);
        raceHolder[i].setRace(names[i]);
        raceHolder[i].setMaxToken(tokenStart[i]);
    }
    delete[] skill;
    skill = nullptr;
    delete[] names;
    names = nullptr;
    delete [] tokenStart;
    tokenStart = nullptr;
}
void AllComponents::showBanners(){
    for(int i = 0; i < 14; i++){
        cout << "Race Banner #" << i + 1;
        cout << " name: " << raceHolder[i].getRace()<<endl;
        cout << "Start Tokens: " << raceHolder[i].getMaxToken();
        raceHolder[i].useSkill();
    }
}

void AllComponents::createBadges(){
    //similiar to above
}
void AllComponents::showBadges(){
    //similiar to above
}

void AllComponents::createTokens(){
    //please finish off strings
    char c;
    for (int i =0; i<186; i++) {
        if(i<15){
            c = 'A';
        }else if(i<23){
            c = 'D';
        }else if(i<34){
            c = 'E';
        }else if(i<44){
            c = 'G'; //ghouls
        }else if(i<57){
            c = 'R';
        }else if(i<77){
            c = 'S'; //skeletons
        }else if(i<88){
            c = 'T'; //Tritons
        }else if(i<99){
            c = 'X';//Giants
        }else if(i<110){
            c = 'H'; //halfings
        }else if(i<120){
            c = 'Y'; //humans
        }else if(i<130){
            c = 'O';
        }else if(i<148){
            c = 'Z'; //Sorcerers
        }else if(i<158){
            c = 'V'; //Trolls
        }else if(i<168){
            c = 'W'; //wizards
        }else if(i<186){
            c = 'L';
        }
        switch (c) {
            case 'A':
                tokenHolder[i].setRace("Amazons");
                break;
            case 'D':
                tokenHolder[i].setRace("Dwarves");
                break;
            case 'E':
                tokenHolder[i].setRace("Elves");
                break;
            case 'G':
                tokenHolder[i].setRace("Ghouls");
                break;
            case 'R':
                tokenHolder[i].setRace("Ratmen");
                break;
            case 'S':
                tokenHolder[i].setRace("Skeletons");
                break;
            case 'T':
                tokenHolder[i].setRace("Tritons");
                break;
            case 'X':
                tokenHolder[i].setRace("Giants");
                break;
            case 'H':
                tokenHolder[i].setRace("Halfins");
                break;
            case 'Y':
                tokenHolder[i].setRace("Humans");
                break;
            case 'O':
                tokenHolder[i].setRace("orcs");
                break;
            case 'Z':
                tokenHolder[i].setRace("Sorcerers");
                break;
            case 'V':
                tokenHolder[i].setRace("Trolls");
                break;
            case 'W':
                tokenHolder[i].setRace("Wizs");
                break;
            case 'L':
                tokenHolder[i].setRace("Lost Tribes");
                break;
        }
        
    }
    
}
void AllComponents::showTokens(){
    int n = 0;
    for (int i=0; i<186; i++) {
        if(i<15){
            n++;
        }else if(i<23){
            if(i==15){n=0;}
            n++;
        }else if(i<34){
            if(i==23){n=0;}
            n++;
        }else if(i<44){
            if(i==34){n=0;}
            n++;
        }else if(i<57){
            if(i==44){n=0;}
            n++;
        }else if(i<77){
            if(i==57){n=0;}
            n++;
        }else if(i<88){
            if(i==77){n=0;}
            n++;
        }else if(i<99){
            if(i==88){n=0;}
            n++;
        }else if(i<110){
            if(i==99){n=0;}
            n++;
        }else if(i<120){
            if(i==110){n=0;}
            n++;
        }else if(i<130){
            if(i==120){n=0;}
            n++;
        }else if(i<148){
            if(i==130){n=0;}
            n++;
        }else if(i<158){
            if(i==148){n=0;}
            n++;
        }else if(i<168){
            if(i==158){n=0;}
            n++;
        }else if(i<186){
            if(i==168){n=0;}
            n++;
        }
        cout << "RaceToken #" << n << " " << tokenHolder[i].getRace() << endl;
    }
}
void AllComponents::createGamePieces(){
    for (int i = 0; i<35; i++) {
        if(i<10){
            pieceHolder[i].setType("Troll Lairs");
        }else if(i<19){
            pieceHolder[i].setType("Mountains");
        }else if(i<25){
            pieceHolder[i].setType("Fortresses");
        }else if(i<30){
            pieceHolder[i].setType("Emcampments");
        }else if(i<32){
            pieceHolder[i].setType("Holes in the ground");
        }else if(i<34){
            pieceHolder[i].setType("Heroes");
        }
        if(i == 34){
            pieceHolder[i].setType("Dragon");
        }
    }
}
void AllComponents::showGamePieces(){
    int n = 0;
    for (int i=0; i<35; i++) {
        if(i<10){
            n++;
            cout << "Piece: "<< pieceHolder[i].getType() << " #" << n <<endl;
        }else if(i<19){
            if(i == 10){
                n = 0;
            }
            n++;
            cout << "Piece: "<< pieceHolder[i].getType() << " #" << n << endl;
        }else if(i<25){
            if(i == 19){
                n = 0;
            }
            n++;
            cout << "Piece: " << pieceHolder[i].getType() << " #" <<n<<endl;
        }else if(i<30){
            if(i == 25){
                n = 0;
            }
            n++;
            cout << "Piece: " << pieceHolder[i].getType() << " #" <<n<<endl;
        }else if(i<32){
            if(i == 30){
                n = 0;
            }
            n++;
            cout << "Piece: " << pieceHolder[i].getType() << " #" <<n<<endl;
        }else if(i<34){
            if(i == 32){
                n = 0;
            }
            n++;
            cout << "Piece: " << pieceHolder[i].getType() << " #" <<n<<endl;
        }
        if(i == 34){
            n = 1;
            cout << "Piece: " << pieceHolder[i].getType() << " #" <<n<<endl;
        }
    }
}

