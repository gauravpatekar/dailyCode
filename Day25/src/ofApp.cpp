#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofNoFill();
    ofSetLineWidth(5);
    ofSetBackgroundColor(20, 20, 255);
    ofSetCircleResolution(6);


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
//    //SQUARE
//    w = 270;
//    for(float i = 0; i < 100; i++){
//        
//        ofSetColor(255, 100 + 150*ofNoise(i/200, toff), i*2);
//        ofPushMatrix();
//        ofRotateDeg(60 * (ofNoise(i/300, toff) - 0.5));
//        ofDrawRectangle(-w/2 - 2*i, -w/2 - 2*i, w + 4*i, w + 4*i);
//        ofPopMatrix();
//    }
//    toff += 0.001;
//    ofSetColor(255, 20, 20);
    
    //HEXAGON
    w = 270;
    for(float i = 0; i < 100; i++){
        ofSetColor(i*2, 250*ofNoise(i/200, toff), 250);
        ofPushMatrix();
        ofRotateDeg(60 * (ofNoise(i/300, toff) - 0.5));
        ofDrawCircle(0, 0, w/2 + 2*i);
        ofPopMatrix();
    }
    toff += 0.001;
    ofSetColor(255, 20, 20);
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
