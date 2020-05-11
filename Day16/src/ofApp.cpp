#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(0, 0, 0);
    ofNoFill();
    ofSetCircleResolution(200);
    
    ofSetLineWidth(4);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    cam.begin();
    
    //float s = 2 * sin(0.001 * ofGetElapsedTimeMillis());
    float s = 10 * ofNoise(toff);
    ofPushMatrix();
    ofRotateDeg(-60, 1, 1, 0);

    for(float i = 0; i < 15; i++){
        float s = 10 * ofNoise(0.04*i, toff);
        //ofSetColor(240 - 15*i, 14, 15*i);
        ofSetColor(i*i, 4*i, 250 - i*i);
        ofDrawCircle(0, 0, 15*s, 240 + i*4);
        ofDrawCircle(0, 0, 15*s, 160 + i*4);
        ofDrawCircle(0, 0, 15*s, 80 + i*4);
        
//        ofDrawCircle(0, 0, i*2 *s, 240 + i*4);
//        ofDrawCircle(0, 0, i*2 *s, 160 + i*4);
//        ofDrawCircle(0, 0, i*2 *s, 80 + i*4);
        
    }
    
        
    ofPopMatrix();

    cam.end();
    
    toff += 0.004;
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
