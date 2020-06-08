#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(0, 0, 0);
    
    for(int i = 0; i < num; i++){
        range[i] = 90;
        position[i] = i*45;
        radius[i] = 100;
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    
    for(int i = 0; i < num; i++){
        ofPath curve1;
        float xoff = (float)i/50;
        position[i] = 360 * ofNoise(toff/2, xoff);
        range[i] = 180 * ofNoise(toff + 10, xoff);
        radius[i] = 200 - 4*i + 200 * ofNoise(toff + 20, xoff);
        curve1.moveTo(0, 0);
        curve1.setCircleResolution(100);
        curve1.arc(0, 0, radius[i], radius[i], position[i], position[i] + range[i]);
        curve1.close();
        //curve1.draw();
        curves.push_back(curve1);
        ofSetColor(255, 0, 0);
        ofDrawCircle(radius[i] * cos(2*PI*(position[i]+0.5*range[i])/360), radius[i] * sin(2*PI*(position[i]+0.5*range[i])/360), 20);
    }
    
    for(int i = 0; i < num; i++){
        //curves[i].setFillColor(ofColor(250, 200 - i*3, i*3));
        curves[i].setFillColor(ofColor(200 - i*4, 200, i*4));
        curves[i].draw();
    }
    
    curves.clear();
    
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

