#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetLineWidth(2);
    ofSetBackgroundColor(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    for(float i = 0; i < 1440; i++){
                
        float x = r * cos(i * 2*PI /1440);
        float y = r * sin(i * 2*PI /1440);
        
        float dr1 = 300 * (ofNoise(x/500, y/500, toff) - 0.3);
        float x1 = (r+dr1) * cos(i * 2*PI /1440);
        float y1 = (r+dr1) * sin(i * 2*PI /1440);
        
        float dr2 = 100 * (ofNoise(x/300, y/300, toff+20) - 0.5);
        float x2 = (r+dr2) * cos(i * 2*PI /1440);
        float y2 = (r+dr2) * sin(i * 2*PI /1440);
        
        if(dr2-dr1 > 0)
            //ofSetColor(dr2-dr1, 250, 250-dr2+dr1);
            ofSetColor(200, 250+dr2-dr1, 250-dr2+dr1);
        else
//        ofSetColor(250+dr2-dr1, 150-dr2+dr1, 250);
        ofSetColor(250, 250+dr2-dr1, 150-dr2+dr1);

        ofDrawLine(x2, y2, x1, y1);
        
    }
    toff += 0.001;

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
