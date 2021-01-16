//
//  GameMap.hpp
//  MegaChicken
//
//  Created by Xuan Tung on 16/01/2021.
//

#ifndef GameMap_hpp
#define GameMap_hpp

#include <stdio.h>
#include "cocos2d.h"
#include <string>
USING_NS_CC;

class GameMap
{
private:
    Sprite* mSprite;
public:
    GameMap();
    GameMap(const char* path);
    void Update(float dt);
    Sprite* getMap();
    ~GameMap();
};

#endif /* GameMap_hpp */
