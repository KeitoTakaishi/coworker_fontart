//
//  movers.hpp
//  fadeout_box
//
//  Created by 高石圭人 on 2017/03/14.
//
//

#ifndef movers_hpp
#define movers_hpp


#include <stdio.h>
#include "ofmain.h"


class mover{
public:
    
    ofVec3f gravity;
    float mass;
    ofVec3f pos;
    ofVec3f vel;
    ofVec3f acc;
    ofBoxPrimitive box;
    ofEasyCam cam;

    
    mover();
    ofVec3f applyForce();
    void update();
    void display();
    
    
};

#endif /* movers_hpp */
