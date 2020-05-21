#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //ofSetBackgroundColor(0, 0, 0);
    ofSetBackgroundColor(230, 200, 200);
    ofSetColor(0, 0, 0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    float r = 200;
    float x = 0;
    float y = 0;
    
    for(float i = 0; i < 1440; i++){
        theta = i/4;
        x = r * cos(theta);
        y = r * sin(theta * scale);
        
        ofDrawCircle(x, y, 1);
    }
    
    scale += 0.00004 * toggle;
    
    if(scale > 1 || scale < -1){
        toggle = !toggle;
    }
    
    

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
