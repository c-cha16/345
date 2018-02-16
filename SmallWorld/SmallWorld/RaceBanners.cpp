//
//  RaceBanners.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "RaceBanners.hpp"
//14 races
//active/decline skills
RaceBanners::RaceBanners(){
    race = "";
    tokenNum = 0;
    active = true;
    skill = "";
}
RaceBanners::RaceBanners(string s, int n, string ski){
    race = s;
    tokenNum = n;
    active = true;
    skill = ski;
}
RaceBanners::~RaceBanners(){
    
}
void RaceBanners::useSkill(){
    cout << " Using skill: " << skill << endl;
}
