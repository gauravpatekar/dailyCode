#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    w = 200;
    h = 300;
    //window thickness
    t = 15;
    //shadow offset
    s = 10;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofSetBackgroundColor(60, 60, 60);
    
    ofSetBackgroundColor(10, 200, 80);
    
    ofTranslate(ofGetWidth()/2 - 300, ofGetHeight()/2);
    
    //window backdrop
    ofSetColor(130, 130, 130);
    ofDrawRectangle(-w/2, -h/2, w, h);
    
    //window person
    ofSetColor(180, 180, 180);
    ofDrawCircle(-30, -30, 30);
    ofDrawRectRounded(-70, 10, 80, 140, 20);
    
    //window border shadow
    ofPushMatrix();
    ofTranslate(-10, 10);
    
    ofSetColor(0, 0, 0);
    
    ofDrawRectangle(-w/2, -h/2, t, h);
    ofDrawRectangle(-t/2, -h/2, t, h);
    ofDrawRectangle(w/2-t, -h/2, t, h);
    
    ofDrawRectangle(-w/2, -h/2, w, t);
    ofDrawRectangle(-w/2, -t/2, w, t);
    ofDrawRectangle(-w/2, h/2-t, w, t);
    
    ofPopMatrix();
    
    //window border
    ofSetColor(200, 200, 200);
    
    ofDrawRectangle(-w/2, -h/2, t, h);
    ofDrawRectangle(-t/2, -h/2, t, h);
    ofDrawRectangle(w/2-t, -h/2, t, h);
    
    ofDrawRectangle(-w/2, -h/2, w, t);
    ofDrawRectangle(-w/2, -t/2, w, t);
    ofDrawRectangle(-w/2, h/2-t, w, t);
    
    
    ///////////////////////
    ofTranslate(300, 0);
    
    //window backdrop
    ofSetColor(130, 130, 130);
    ofDrawRectangle(-w/2, -h/2, w, h);
    
    //window person
    ofSetColor(180, 180, 180);
    ofDrawCircle(-30, -30, 30);
    ofDrawRectRounded(-70, 10, 80, 140, 20);
    
    //window border shadow
    ofPushMatrix();
    ofTranslate(-10, 10);
    
    ofSetColor(0, 0, 0);
    
    ofDrawRectangle(-w/2, -h/2, t, h);
    ofDrawRectangle(-t/2, -h/2, t, h);
    ofDrawRectangle(w/2-t, -h/2, t, h);
    
    ofDrawRectangle(-w/2, -h/2, w, t);
    ofDrawRectangle(-w/2, -t/2, w, t);
    ofDrawRectangle(-w/2, h/2-t, w, t);
    
    ofPopMatrix();
    
    //window border
    ofSetColor(200, 200, 200);
    
    ofDrawRectangle(-w/2, -h/2, t, h);
    ofDrawRectangle(-t/2, -h/2, t, h);
    ofDrawRectangle(w/2-t, -h/2, t, h);
    
    ofDrawRectangle(-w/2, -h/2, w, t);
    ofDrawRectangle(-w/2, -t/2, w, t);
    ofDrawRectangle(-w/2, h/2-t, w, t);
    
    ////////////////////////
    ofTranslate(300, 0);
    
    // wall color
    ofSetColor(10, 200, 80);
    ofDrawRectangle(-w, -ofGetHeight()/2, 2*w, ofGetHeight());
    
    //window backdrop
    //ofSetColor(130, 130, 130);
    ofSetColor(240, 170, 210);
    ofDrawRectangle(-w/2, -h/2, w, h);
    
    //window person shadow
    ofSetColor(40, 40, 200);
    ofDrawCircle(-30-s/2, -30+s/2, 30);
    ofDrawRectRounded(-70-s/2, 10+s/2, 80, 140, 20);
    //window person
    ofSetColor(70, 70, 230);
    ofDrawCircle(-30, -30, 30);
    ofDrawRectRounded(-70, 10, 80, 140, 20);
    
    //window border shadow
    ofPushMatrix();
    ofTranslate(-s, s);
    
    //ofSetColor(0, 0, 0);
    ofSetColor(10, 150, 250);
    
    ofDrawRectangle(-w/2, -h/2, t, h);
    ofDrawRectangle(-t/2, -h/2, t, h);
    ofDrawRectangle(w/2-t, -h/2, t, h);
    
    ofDrawRectangle(-w/2, -h/2, w, t);
    ofDrawRectangle(-w/2, -t/2, w, t);
    ofDrawRectangle(-w/2, h/2-t, w, t);
    
    ofDrawTriangle(-w/2, -h/2, -w/2+s, -h/2-s, -w/2+s, -h/2);
    ofDrawTriangle(w/2, h/2, w/2, h/2-s, w/2+s, h/2-s);
    
    ofPopMatrix();
    
    //window border
    //ofSetColor(200, 200, 200);
    ofSetColor(20, 200, 250);
    
    ofDrawRectangle(-w/2, -h/2, t, h);
    ofDrawRectangle(-t/2, -h/2, t, h);
    ofDrawRectangle(w/2-t, -h/2, t, h);
    
    ofDrawRectangle(-w/2, -h/2, w, t);
    ofDrawRectangle(-w/2, -t/2, w, t);
    ofDrawRectangle(-w/2, h/2-t, w, t);
    

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
