#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(0, 0, 0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);

    for(float i = 0; i < 1440; i++){
        
        int r =  200 + (100 * (ofNoise(i/400, toff)-0.5));
        int r2 =  300 + (100 * (ofNoise(i/400, toff+20)-0.5));
        ofSetColor(250, 155*ofNoise(i/300, toff), 155 - 255*ofNoise(i/300, toff));
        
        float theta = i/4 * TWO_PI/360; //RADIANS
        
        float x = r * cos(theta);
        float y = r * sin(theta);
        float x2 = r2 * cos(theta);
        float y2 = r2 * sin(theta);
        
        ofRotateDeg(theta, 0, 1, 0);
        ofDrawCircle(x, y, 4);
        //ofDrawCircle(x2, y2, 4);
        
        
        
//        //top waves
//        for(int j = 0; j < 30; j++){
//           ofDrawCircle(i, calcY * j/30, 4);
//        }
//        //bottom waves
//        for(int j = 0; j < 30; j++){
//            ofDrawCircle(i, calcY + (ofGetHeight()-calcY) * j/30, 4);
//        }

    }
    toff += 0.005;
    
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
