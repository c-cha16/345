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
using namespace std;

class RaceBanners{
public:
    RaceBanners();
    ~RaceBanners();
    string getRace(){ return race;}
    void setRace(string s){ race =s;}
    int getMaxToken(){ return tokenNum;}
    void setMaxToken(int n){ tokenNum =n;}
    void setActive(){active = true;}
    void setDecline(){active = false;}
private:
    string race;
    int tokenNum;
    bool active;
    
};


#endif /* RaceBanners_hpp */
