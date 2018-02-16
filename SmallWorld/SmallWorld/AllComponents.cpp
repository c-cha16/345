//
//  AllComponents.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "AllComponents.hpp"
#include <iostream>
#include "Tokens.hpp"
#include "RaceBanners.hpp"
#include "Coins.hpp"
#include "Badges.hpp"
#include "GamePieces.hpp"

AllComponents::AllComponents(){
    //components
        //coins
    bank = new Coins[109];
    raceHolder = new RaceBanners[14];
}
AllComponents::~AllComponents(){
    delete bank;
    bank = nullptr;
    
    delete raceHolder;
    raceHolder = nullptr;
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
                cout << "test1" <<endl;
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



