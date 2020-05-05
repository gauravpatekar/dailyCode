#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(100);
    
    for(int i = 0; i < 25; i++){
        rectx[i] = ofRandom(0, ofGetWidth());
        recty[i] = ofRandom(400, ofGetHeight());
        rectw[i] = 100;
        recth[i] = 600;
    }
    
    for(int i = 0; i < 50; i++){
        starx[i] = ofRandom(0, ofGetWidth());
        stary[i] = ofRandom(0, ofGetHeight()/2);
        starAlpha[i] = ofRandom(30, 100);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetBackgroundColor(0, 0, 0);
    
//    for(int i = 0; i < 50; i++){
//        ofSetColor(255, 255, 255, starAlpha[i]);
//        ofDrawCircle(starx[i], stary[i], 15);
//    }
    
    for(int j = 0; j < 5; j++){
        
        for(int i = 0; i < 5; i++){
            ofSetColor(70, 70, 70);
            ofDrawRectangle(rectx[i+5*j], recty[i+5*j], rectw[i+5*j], ofGetHeight() - recty[i+5*j]);
            
            ofSetColor(200, 170, 2);
            ofDrawRectangle(rectx[i+5*j] + 10, recty[i+5*j] + 20, 15, 25);
        }
        
        ofSetColor(0, 0, 0, 80);
        ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    }
    
    //STARS
     for(int i = 0; i < 50; i++){
         ofSetColor(255, 255, 255, starAlpha[i]);
         ofDrawCircle(starx[i], stary[i], 3);
     }
    
    ofSetColor(255, 255, 255, 90);
    ofDrawCircle(200, 200, 50);
    ofSetColor(0, 0, 0);
    ofDrawCircle(150, 150, 70);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    for(int i = 0; i < 25; i++){
        rectx[i] = ofRandom(0, ofGetWidth());
        recty[i] = ofRandom(400, ofGetHeight());
        rectw[i] = 100;
        recth[i] = 600;
    }
    

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
void drawBuilding(int width, int height, int columns, int rows){
    ofDrawRectangle(0, 0, width, height);
}

