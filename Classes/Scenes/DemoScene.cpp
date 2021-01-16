//
//  DemoScene.cpp
//  MegaChicken
//
//  Created by Xuan Tung on 16/01/2021.
//

#include <stdio.h>
#include "SimpleAudioEngine.h"
#include "DemoScene.h"

USING_NS_CC;

Scene* DemoScene::createScene()
{
    return DemoScene::create();
}

bool DemoScene::init()
{
    if ( !Scene::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto ck = Sprite::create("mega-chicken.png");
    ck->setPosition(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y);
    this->addChild(ck);
    return true;
}

void DemoScene::menuCloseCallback(cocos2d::Ref *pSender)
{
    Director::getInstance()->end();
}
