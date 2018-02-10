//
//  Region.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-09.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef Region_hpp
#define Region_hpp

#include <stdio.h>

class Region {
public:
    Region();
    int getTokens();
    void setTokens();
    int getOwner();
    void setOwner();
    
private:
    int tokens;
    int owner;
    
};


#endif /* Region_hpp */
