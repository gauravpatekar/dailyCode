#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofNoFill();
    ofSetLineWidth(4);
    ofSetCircleResolution(6);
    //ofSetCircleResolution(300);
    ofSetBackgroundColor(0, 0, 0);

    angle = 0;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofSetLineWidth(4);
    for(int i = 0; i < 120; i++){
        ofPushMatrix();
        ofSetColor(255, i, 0, 50);
        tempAnglex = ofNoise(ofGetElapsedTimef() * 0.13) ;
        tempAngley = ofNoise(ofGetElapsedTimef() * 0.3) ;
        tempAnglez = ofNoise(ofGetElapsedTimef() * 0.26)*2 - 1 ;
            ofRotateDeg(angle + i*3, tempAnglex, tempAngley, tempAnglez);
            ofDrawCircle(0, 0, 250);
        ofPopMatrix();
    }
    for(int i = 0; i < 120; i++){
        ofPushMatrix();
            ofSetColor(i*2, 0, 155, 30);
            ofRotateDeg(angle + i*3, -tempAnglez, tempAnglex, -tempAngley);
            ofDrawCircle(0, 0, 280);
        ofPopMatrix();
    }
    
    angle += .1;

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
