#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(0, 0, 0);
    ofSetCircleResolution(400);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(100, 100);
    //ofNoFill();
    ofSetLineWidth(3);
    
    for(float i = 0; i < 12; i++){
        for(float j = 0; j < 12; j++){
            
             ofPushMatrix();
             ofTranslate(i * spacing, j * spacing);
             ofRotateDeg(360 * ofNoise(i/40, j/50, toff), 0, 1, 0);
             ofSetColor(255 - j*20, i*20, 255);
             //ofDrawCircle(0, 0, 20);
             //ofDrawRectangle(-30, -10, 60, 20);
             ofDrawEllipse(0, 0, 60, 20);
             ofPopMatrix();
           
             ofPushMatrix();
             ofTranslate(i * spacing, j * spacing);
             ofRotateDeg(360 * ofNoise(i/55, j/45, toff), 1, 0, 0);
             ofSetColor(255, 255 - i*20, j*20);
             //ofDrawCircle(0, 0, 10);
             //ofDrawRectangle(-10, -30, 20, 60);
             ofDrawEllipse(0, 0, 20, 60);
             ofPopMatrix();
                        
        }
    }
    
    toff +=0.002;

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
