//
//  StartUp.cpp
//  SmallWorld
//
//  Created by Charles  Chan on 2018-03-11.
//  Copyright © 2018 Charles Chan. All rights reserved.
//

#include "StartUp.hpp"
StartUp::StartUp(){
    
}

StartUp::~StartUp(){
    
}

void StartUp::setPieces(int n, Maps *map){
    switch (n) {
        case 2:
            //2 person map lost tribe distribution
            cout<<"Setting up pieces"<<endl;
            map->getNodeVector()[3].addToken('L');
            map->getNodeVector()[6].addToken('L');
            map->getNodeVector()[11].addToken('L');
            map->getNodeVector()[16].addToken('L');
            map->getNodeVector()[17].addToken('L');
            map->getNodeVector()[18].addToken('L');
            map->getNodeVector()[22].addToken('L');
            map->getNodeVector()[2].addPiece('M');
            map->getNodeVector()[7].addPiece('M');
            map->getNodeVector()[10].addPiece('M');
            map->getNodeVector()[20].addPiece('M');
            break;
    }
}
