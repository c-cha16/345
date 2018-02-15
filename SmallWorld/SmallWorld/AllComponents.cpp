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
    
}

AllComponents::~AllComponents(){
    delete bank;
    bank = nullptr;
    
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





