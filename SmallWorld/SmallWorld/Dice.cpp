//
//  Dice.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-13.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "Dice.hpp"

#include <iostream>
using namespace std;
#include "Dice.hpp"


int diceResult;
Dice::Dice(){
    //cout<<"DICE WAS JUST CREATED"<<endl;
    
}

Dice::~Dice(){
    //container = nullptr;
    
}
void Dice::percentage(){ //returns the percentage of each numbers rolled
    
    cout<< "\nYou have rolled 1:  " << container[1] << " times --> "<<container[1]/container[0]*100 <<"%\n";
    cout<< "You have rolled 2:  " << container[2] << " times --> "<<container[2]/container[0]*100 <<"%\n";
    cout<< "You have rolled 3:  " << container[3] << " times --> "<<container[3]/container[0]*100 <<"%\n";
}

void Dice::storeResults(int i){
    if (i==1){
        container[1]=container[1]+1;
        
    }
    else if (i==2){
        container[2]=container[2]+1;
        
    }
    else if (i==3){
        container[3]=container[3]+1;
    }
    container[0] = container[0]++;
}

void Dice::rollingDice(int tokens, int regionTokens){ //rolling the dice method
    int numConquer;
    int showResults;
    int x = 0;
    //int diceResult;
    cout << "=================="<<endl;
    cout << "Final conquest" << endl;
    cout << "=================="<<endl;
    cout << "Rolling dice"<<endl;
    while(x==0){
        diceResult=random();
        storeResults(diceResult);
        cout << "The dice you rolled was ";
        cout << diceResult << endl;
        cout << "In your hand, you have ";
        cout << tokens;
        cout << " tokens remaining." <<endl;
        cout << "Would you like to conquer the territory? 0 for yes" <<endl;
        cin >> numConquer;
        if(numConquer == 0){
            tokens = tokens - regionTokens;
        }
        cout << "In your hand, you have ";
        cout << tokens;
        cout << " tokens remaining." <<endl;
        
        cout <<"Press 1 to see how many dices of each you have rolled so far. Press 0 to continue\n";
        cin >> showResults;
        if(showResults==1){
            percentage();
        }
        
        cout << "Stop rolling press 1, continue press 0" << endl;
        cin >> x;
        
    }
}

int Dice::random(){  //random method to generate a number between 1-3 for the dice.
    return (rand()%3 +1);
}
