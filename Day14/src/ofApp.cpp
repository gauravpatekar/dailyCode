#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(0, 0, 0);
    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(100, 100);
    
    for(float i = 0; i < 8; i++){
        for(float j = 0; j < 8; j++){
            ofPushMatrix();
            ofTranslate(i * spacing, j * spacing);
            ofRotateDeg(360 * ofNoise(i/20, j/20, toff), 1, 1, 0);
            //ofSetColor(255, 0, 0);
            ofSetColor(i*30, j*30, 250);
            ofDrawCircle(0, 0, 30);
            ofPopMatrix();
           
            ofPushMatrix();
            ofTranslate(i * spacing, j * spacing);
            ofRotateDeg(360 * ofNoise(i/30, j/30, toff), 1, -1, 0);
            //ofSetColor(0, 0, 255);
            ofSetColor(250, i*30, j*30);
            ofDrawCircle(0, 0, 30);
            ofPopMatrix();
        }
    }
    
    toff +=0.0015;
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
