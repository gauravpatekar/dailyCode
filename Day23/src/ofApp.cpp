#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(300);

    ofColor back;
    back.setHsb(0, 50, 235);
    ofSetBackgroundColor(back);
    
    ofColor fore;
//    fore.setHsb(100, 155, 55);
//    fore.setHsb(100, 155, 55);
    fore.setHsb(100, 0, 255);
    ofSetColor(fore);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
//    for(float i = -1; i < 12; i++){
//        ofPushMatrix();
//        ofTranslate(100 * cos((i * 30)*(2*PI)/360), 100 * sin((i * 30)*(2*PI)/360));
//        //angle = range * cos(theta + i/5); //cos > radians
//        angle = range * sin(theta + i * 30 * 2 * PI / 360); //cos > radians
//        ofRotateDeg(angle + i*30 + 90); //rotate > degrees
//        ofDrawCircle(0, 0, 10);
//        ofDrawRectangle(-2, 0, 4, -200);
//        ofPopMatrix();
//    }
    
    for(float i = 0; i < 60; i++){
        ofPushMatrix();
        ofTranslate(100 * cos((i * 6)*(2*PI)/360), 100 * sin((i * 6)*(2*PI)/360));
        //angle = range * cos(theta + i/5); //cos > radians
        angle = range * sin(theta + i * 6 * 2 * PI / 360); //cos > radians
        ofRotateDeg(angle + i*6 + 90); //rotate > degrees
        ofDrawCircle(0, 0, 2);
        ofDrawRectangle(-2, 0, 4, -200);
        ofDrawCircle(0, -200, 2);
        ofPopMatrix();
    }
    
    theta += speed;
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
