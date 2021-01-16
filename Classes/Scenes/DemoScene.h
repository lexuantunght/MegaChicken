//
//  DemoScene.h
//  MegaChicken
//
//  Created by Xuan Tung on 16/01/2021.
//

#ifndef DemoScene_h
#define DemoScene_h

#include "cocos2d.h"
#include "GameMap.hpp"

class DemoScene : public cocos2d::Scene
{
private:
    GameMap *mMap;
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(DemoScene);
};

#endif /* DemoScene_h */
