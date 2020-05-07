#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofSetBackgroundColor(250, 0, 100);
    ofSetBackgroundColor(0, 0, 0);
    
    for(float i = 0; i < ofGetWidth(); i++){
        int calcY =  ofGetHeight()/3 + (400 * (ofNoise(i/400, toff)-0.5));
        ofSetColor(250, 155*ofNoise(i/300, toff), 155 - 255*ofNoise(i/300, toff));
        
        //main wave
        ofDrawCircle(i, calcY, 4);
        
//        //top waves
//        for(int j = 0; j < 30; j++){
//           ofDrawCircle(i, calcY * j/30, 4);
//        }
        
        //bottom waves
        for(int j = 0; j < 30; j++){
            ofDrawCircle(i, calcY + (ofGetHeight()-calcY) * j/30, 4);
        }

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
