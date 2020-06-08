#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0, 0, 0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofTranslate(1.5*spacing, 1.5*spacing);

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            //
            ofPushMatrix();
            ofTranslate(i * spacing, j * spacing);
            float width = 5 + w * sin(1.5*PI*i/20 + toff);
            //float height = w; // * ofNoise(toff);
            float height = 5 + w * cos(1.5*PI*i/20 + toff);
            ofColor col1;
            ofColor col2;
            col1.setHsb(i*15, 110 + j*20, 250);
            col2.setHsb(150+i*15, 250 - j*20, 250);
//            col2.setHsb((ofNoise(toff)*150) + i*15, 200, 250);
            
//            ofSetColor(col1);
//            ofDrawRectangle(-width/2, -w/2, width, height);
//            ofSetColor(col2);
//            ofDrawRectangle(-w/2, -height/2, height, width);
            
            ofSetColor(col1);
            ofDrawRectangle(-width/2, -height/2, width, height);
            ofSetColor(col2);
            ofDrawRectangle(-height/2, -width/2, height, width);
            
            ofPopMatrix();
        }
    }
    toff += 0.005;

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
