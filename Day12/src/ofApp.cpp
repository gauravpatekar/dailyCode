#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    font1.load("MajorMonoDisplay-Regular.ttf", 80);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetBackgroundColor(0, 0, 0);
    
    ofSetColor(255, 255, 255);
    font1.drawString("TESTING", 300, 400);
    
    for(float i = 0; i < ofGetWidth(); i++){
        //third wave
        //int calcY =  ofGetHeight()/2 + (800 * (ofNoise(i/3000, toff - 2)-0.5)); // line equal in ampliture across x
        int calcY =  ofGetHeight()/2 + (800 * (ofNoise(i/1200, toff - 2)-0.5) * i/ofGetWidth()); // line starts at the center on left and grows
        //int calcY =  ofGetHeight()/2 + (1200 * (ofNoise(i/600, toff - 2)-0.5) * (ofGetWidth()/2 - abs(i - ofGetWidth()/2)) / ofGetWidth() ); // line with both ends static
        for(int j = 0; j < 15; j++){
            ofSetColor(155*ofNoise(i/700, toff), 250 - j*15, 155 - 255*ofNoise(i/1000, toff));
            ofDrawCircle(i, calcY + j*2*c, c);
        }
    }
    
    ofSetColor(255, 255, 255);
    font1.drawString("TESTING", 300, 500);
    
    for(float i = 0; i < ofGetWidth(); i++){
        //second wave
        //int calcY =  ofGetHeight()/2 + (800 * (ofNoise(i/3000, toff + 2)-0.5));
        int calcY =  ofGetHeight()/2 + (800 * (ofNoise(i/1200, toff + 2)-0.5) * i/ofGetWidth());
        //int calcY =  ofGetHeight()/2 + (1200 * (ofNoise(i/600, toff + 2)-0.5) * (ofGetWidth()/2 - abs(i - ofGetWidth()/2)) / ofGetWidth() );
        for(int j = 0; j < 15; j++){
            ofSetColor(155*ofNoise(i/700, toff), 155 - 255*ofNoise(i/1000, toff), 250 - j*15);
            ofDrawCircle(i, calcY + j*2*c, c);
        }
    }
    
    ofSetColor(255, 255, 255);
    font1.drawString("TEXT", 300, 600);
    
    for(float i = 0; i < ofGetWidth(); i++){
        //first wave
        //int calcY =  ofGetHeight()/2 + (800 * (ofNoise(i/3000, toff)-0.5));
        int calcY =  ofGetHeight()/2 + (800 * (ofNoise(i/1200, toff)-0.5) * i/ofGetWidth());
        //int calcY =  ofGetHeight()/2 + (1200 * (ofNoise(i/600, toff)-0.5) * (ofGetWidth()/2 - abs(i - ofGetWidth()/2)) / ofGetWidth() );
        for(int j = 0; j < 15; j++){
            ofSetColor(250 - j*15, 155*ofNoise(i/700, toff), 155 - 255*ofNoise(i/1000, toff));
            ofDrawCircle(i, calcY + j*2*c, c);
        }
    }

    toff += 0.003;

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
