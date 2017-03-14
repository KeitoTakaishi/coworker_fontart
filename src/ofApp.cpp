#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for(int i = 0; i < num; i++){
        m[i] = *new mover();
    }
    //ofEnableBlendMode(OF_BLENDMODE_ALPHA);
    ofSetBackgroundAuto(false); //フレーム更新時に塗り潰しを無効化
    ofBackground(0, 0, 0); //背景色を黒に設定
    
    ofTrueTypeFont::setGlobalDpi(60);
    
    frabk.load("frabk.ttf", 80);
    frabk.setLineHeight(24);
    frabk.setLetterSpacing(1.0);

}

//--------------------------------------------------------------
void ofApp::update(){
    pos.x += 30.0;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    box.setPosition(pos.x,pos.y,pos.z);

    ofSetColor(0, 0, 0, 30); //半透明の黒（背景色）
    ofDrawRectangle(-ofGetWidth(), -ofGetHeight(), 2*ofGetWidth(), 2*ofGetHeight()); //画面と同じ大きさの四角形を描画
    ofSetColor(0,255,0);
    for(int i = 0; i <num; i++){
    m[i].update();
        m[i].display();
        
    }
    
    ofSetColor(255, 255, 255); // 文字色を指定
    frabk.drawString("Generative Art", -150, 0);
    frabk.drawString("Kinect", 150, 200);
    frabk.drawString("Leap Mtion", -450, -150);
    frabk.drawString("OpenframeWorks", 0, -350);
    ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255)); // 文字色を指定
    frabk.drawString("Media Art", -450, 300);

    
    
    
    

    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
