#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(210, 190, 180);
    ofSetColor(0, 0, 0);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    cam.begin();

    for(float i = 0; i < 1440; i++){
        
        int r =  200 + (100 * (ofNoise(i/400, toff)-0.5));
        int r2 =  300 + (100 * (ofNoise(i/400, toff+20)-0.5));
        float theta = i/4 * TWO_PI/360; //RADIANS
        
        float x = r * cos(theta);
        float y = r * sin(theta);
        float x2 = r2 * cos(theta);
        float y2 = r2 * sin(theta);

        ofRotateDeg(theta, -1, 1, 1);
        ofDrawCircle(x, y, 4);

    }

    toff += 0.005;
    
    cam.end();
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
