//
//  Badges.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef Badges_hpp
#define Badges_hpp
#include <string>
#include <stdio.h>
using namespace std;

class Badges{
public:
    Badges();
    Badges(string s, int n, string ski);
    ~Badges();
    
    string getName(){ return name;}
    void setName(string s){name = s;}
    int getMaxToken(){return tokenAmt;}
    void setMaxToken(int n){ tokenAmt = n;}
    string getSkill(){ return skill;}
    void setSkill(string s){skill = s;}
private:
    string name;
    string skill;
    int tokenAmt;
};


#endif /* Badges_hpp */
