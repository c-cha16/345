//
//  AllComponents.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-14.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef AllComponents_hpp
#define AllComponents_hpp
#include "Coins.hpp"
#include "RaceBanners.hpp"
#include <stdio.h>

class AllComponents{
public:
    AllComponents();
    ~AllComponents();
    void createCoins();
    void showBank();
    
    void createBanners();
    void showBanners();
    
    
private:
    Coins* bank;
    RaceBanners* raceHolder;
};

#endif /* AllComponents_hpp */
