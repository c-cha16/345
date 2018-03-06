//
//  Dice.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-15.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include <iostream>
#include "Dice.hpp"

Dice::Dice(){
    cout<<"DICE WAS JUST CREATED"<<endl;
    container.push_back(0);
    container.push_back(0);
    container.push_back(0);
    container.push_back(0);
    container.push_back(0);
}
Dice& Dice::operator=(Dice other){
    cout << "copy assignment of Dice\n";
    container[0] = other.container[0];
    container[1] = other.container[1];
    container[2] = other.container[2];
    container[3] = other.container[3];
    container[4] = other.container[4];
    return *this;
}
Dice::~Dice(){
    container.pop_back();
    container.pop_back();
    container.pop_back();
    container.pop_back();
    container.pop_back();
    //container = nullptr;
    
}
void Dice::percentage(){ //returns the percentage of each numbers rolled
    cout<< "\nYou have rolled 0:  " << container[0] << " times --> "<<(container[0]/container[4])*100 <<"%\n";
    cout<< "You have rolled 1:  " << container[1] << " times --> "<<(container[1]/container[4])*100 <<"%\n";
    cout<< "You have rolled 2:  " << container[2] << " times --> "<<(container[2]/container[4])*100 <<"%\n";
    cout<< "You have rolled 3:  " << container[3] << " times --> "<<(container[3]/container[4])*100 <<"%\n";
    cout<< "You have rolled a total of:  " << container[4] << endl;
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
        
    }else{
        container[0]=container[0]+1;
        
    }
    container[4] = container[4] + 1;
}

void Dice::rollingDice(int tokens, int regionTokens){ //rolling the dice method
    int numConquer;
    int showResults;
    int x = 0;
    cout << "=================="<<endl;
    cout << "Final conquest" << endl;
    cout << "=================="<<endl;
    cout << "Rolling dice"<<endl;
    //for the purposes of the demo I created a while loop to continue rolling
    if(tokens - regionTokens < 0){
        x = 1;
    }
    while(x==0){
        diceResult = rand()%6 +1;
        if(diceResult > 3){
            diceResult = 0;
        }
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
        cin.clear();
        cin.ignore();
        
        cout << "In your hand, you have ";
        cout << tokens;
        cout << " tokens remaining." <<endl;
        
        cout <<"Press 1 to see how many dices of each you have rolled so far. Press 0 to continue\n";
        cin >> showResults;
        if(showResults==1){
            percentage();
        }
        cin.clear();
        cin.ignore();
        
        cout << "Stop rolling press 1, continue press 0" << endl;
        cin >> x;
        cin.clear();
        cin.ignore();
    }
}
