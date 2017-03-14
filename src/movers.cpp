//
//  movers.cpp
//  fadeout_box
//
//  Created by 高石圭人 on 2017/03/14.
//
//

#include "movers.hpp"

mover::mover(){
    gravity.set (0,0.4,0);
    mass = ofRandom(10,30);  //mass is between A  and B
    pos.set(ofRandom(-1*ofGetWidth()/2,ofGetWidth()/2),ofRandom(ofGetHeight()/2,ofGetHeight()/2+300),0);
    vel.set(0.0,0.0,0.0);
    acc.set(0.0,0.0,0.0);
    box.set(ofRandom(20));
}

ofVec3f mover::applyForce(){
    ofVec3f force;
    force.set(.0,.0,.0);
    force.y = gravity.y/mass;
    
    return force;
}


void mover::update(){
    acc.y += applyForce().y;
    vel.y += acc.y;
    pos.y -= vel.y;
    
    if(pos.y < -1*ofGetHeight()/2)
    {
        pos.y = ofGetHeight()/2 + 100;
    }
    acc.y *= 0;
}

void mover::display(){
    
    
    box.setPosition(pos.x,pos.y,pos.z);
    box.drawWireframe();
    }
