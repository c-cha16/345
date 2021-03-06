//
//  Region.hpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-02-16.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#ifndef Region_hpp
#define Region_hpp

#include <stdio.h>
using namespace std;
#include <string>

class Region {
public:
    Region();
    Region(Region const &r);
    ~Region();
    Region(int toks, string own);
    int getTokens(){
        return tokens;}
    void setTokens(int toks){
        tokens = toks;}
    string getOwner() const{
        return owner;}
    void setOwner(string own){
        owner = own;}
    
private:
    int tokens;
    string owner;
    
};
#endif /* Region_hpp */
