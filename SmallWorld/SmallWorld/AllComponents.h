//
//  AllComponents.h
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef AllComponents_h
#define AllComponents_h
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

    void createTokens();
    void showTokens();
    
    void createGamePieces();
    void showGamePieces();
    
    void createBadges();
    void showBadges();
private:
    //done
    Coins* bank;
    RaceBanners* raceHolder;
    Tokens* tokenHolder;
    GamePieces* pieceHolder;
    
    Badges* badgeHolder;
    
};


#endif /* AllComponents_h */
