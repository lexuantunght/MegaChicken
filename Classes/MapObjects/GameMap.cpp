//
//  GameMap.cpp
//  MegaChicken
//
//  Created by Xuan Tung on 16/01/2021.
//

#include "GameMap.hpp"
USING_NS_CC;

GameMap::GameMap()
{
    
}

GameMap::GameMap(const char* path)
{
    this->mSprite = Sprite::create(path);
    this->mSprite->setPosition(0, 0);
}

GameMap::~GameMap()
{
    delete mSprite;
}

void GameMap::Update(float dt)
{
    this->mSprite->update(dt);
}

Sprite* GameMap::getMap()
{
    return this->mSprite;
}
