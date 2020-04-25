#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofNoFill();
    ofSetLineWidth(4);
    ofSetCircleResolution(300);
    ofSetBackgroundColor(0, 0, 0);

    
    angle = 0;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    //ofDrawSphere(0, 0, 100);
//    ofFill();
//    ofSetColor(0, 0, 0);
//    ofDrawCircle(0, 0, 200);
//    ofNoFill();
    
    ofSetColor(255, 0, 121, 50);
    
    for(int i = 0; i < 120; i++){
        ofPushMatrix();
        tempAnglex = ofNoise(ofGetElapsedTimef() * 0.13) ;
        tempAngley = ofNoise(ofGetElapsedTimef() * 0.3) ;
        tempAnglez = ofNoise(ofGetElapsedTimef() * 0.26)*2 - 1 ;
            ofRotateDeg(angle + i*3, tempAnglex, tempAngley, tempAnglez);
            ofDrawCircle(0, 0, 250);
        ofPopMatrix();
    }
    
    
    ofSetColor(68, 11, 212, 50);

    for(int i = 0; i < 120; i++){
        ofPushMatrix();
            ofRotateDeg(angle + i*3, -tempAnglez, tempAnglex, -tempAngley);
            ofDrawCircle(0, 0, 280);
        ofPopMatrix();
    }

    
//    ofSetColor(0, 180, 212, 20);
//
//    for(int i = 0; i < 120; i++){
//        ofPushMatrix();
//            ofRotateDeg(angle + i*3, tempAngley, tempAnglez, -tempAnglex);
//            ofDrawCircle(0, 0, 800);
//        ofPopMatrix();
//    }
    
    angle += .1;
//    angleTrig = sin(angle/6) * 90 + 90;

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
