#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetBackgroundColor(0, 0, 0);
    
    for(float i = 0; i < ofGetWidth(); i++){

//        //for 2 non intersecting waves
//        int calcY =  ofGetHeight()/3 + (400 * (ofNoise(i/400, toff)-0.5));
//        int calcY2 =  2 * ofGetHeight()/3 + (400 * (ofNoise(i/400, toff+2)-0.5));
        
        //for 2 intersecting waves
        int calcY =  ofGetHeight()/2 + (600 * (ofNoise(i/800, toff)-0.5));
        int calcY2 =  ofGetHeight()/2 + (600 * (ofNoise(i/800, toff+2)-0.5));
        ofSetColor(250, 155*ofNoise(i/300, toff), 155 - 255*ofNoise(i/300, toff));
        
        //drawing waves
        for(int j = 0; j < 60; j++){
            // CHANGING THE VALUES IN THE BELOW LINE CREATES THE MOST BEAUTIFUL GRADIENTS IVE BEEN ABLE TO CREATE SO FAR
            ofSetColor(j*4, 250-j*4*ofNoise(i/300, toff), 255 - j*2*ofNoise(i/300, toff));
            ofDrawCircle(i, calcY + (calcY2-calcY) * j/60, 4);
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
