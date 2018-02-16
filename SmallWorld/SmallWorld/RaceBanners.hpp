//
//  RaceBanners.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef RaceBanners_hpp
#define RaceBanners_hpp
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class RaceBanners{
public:
    RaceBanners();
    RaceBanners(RaceBanners const &rb);
    RaceBanners(string s, int n, string ski);
    ~RaceBanners();
    string getRace(){ return race;}
    void setRace(string s){ race =s;}
    int getMaxToken(){ return tokenNum;}
    void setMaxToken(int n){ tokenNum =n;}
    void setActive(){active = true;}
    void setDecline(){active = false;}
    void useSkill();
    string getSkill(){ return skill;}
    void setSkill(string s){ skill = s;}
private:
    string race;
    string skill;
    int tokenNum;
    bool active;
    
};


#endif /* RaceBanners_hpp */
