#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(300);

    ofColor back;
    //back.setHsb(0, 50, 235);
    back.setHsb(30, 20, 135);
    ofSetBackgroundColor(back);
    
    ofColor fore;
    fore.setHsb(100, 0, 255);
    //fore.setHsb(70, 0, 0);
    ofSetColor(fore);
    
    ofSetLineWidth(4);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    for(float i = 0; i < 60; i++){
        ofPushMatrix();
        ofTranslate(100 * cos((i * 6)*(2*PI)/360), 100 * sin((i * 6)*(2*PI)/360));
        //angle = range * cos(theta + i/5); //cos > radians
        angle = range * sin(theta + i * 6 * 2 * PI / 360); //cos > radians
        ofRotateDeg(angle + i*6 + 90); //rotate > degrees
        //ofDrawCircle(0, 0, 2);
        //ofDrawRectangle(-2, 0, 4, -200);
        float cpx1 = 60 * (ofNoise(toff) - 0.5);
        float cpx2 = 60 * (ofNoise(toff + 10) - 0.5);
        float cpy1 = 160 * (ofNoise(1.3*toff + 20) - 0.5);
        float cpy2 = 160 * (ofNoise(1.7*toff + 30) - 0.5);
//        ofDrawBezier(cpx1, -150 + cpy1, cpx2, -100 + cpy2, 0, 0, 0, -200);
        ofDrawBezier(cpx1, cpy1, cpx2, cpy2, 0, 0, 0, -200);
        //ofDrawCircle(0, -200, 4);
        ofPopMatrix();
         toff += 0.00008;
    }
    
    theta += speed;
    //toff += 0.005;
    
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
