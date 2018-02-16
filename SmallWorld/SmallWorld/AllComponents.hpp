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
#include "Badges.hpp"
#include "Tokens.hpp"
#include "GamePieces.hpp"

class AllComponents{
public:
    AllComponents();
    ~AllComponents();
    //done
    void createCoins();
    void showBank();
    
    void createBanners();
    void showBanners();
    //not done
    void createBadges();
    void showBadges();
    
    void createTokens();
    void showTokens();
    
    void createGamePieces();
    void showGamePieces();
private:
    //done
    Coins* bank;
    RaceBanners* raceHolder;
    //not done
    Tokens* tokenHolder;
    GamePieces* pieceHolder;
    Badges* badgeHolder;
    
};

#endif /* AllComponents_hpp */
