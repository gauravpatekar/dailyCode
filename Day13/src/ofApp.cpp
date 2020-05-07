#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    font1.load("MajorMonoDisplay-Regular.ttf", 80);
    ofSetBackgroundColor(0, 0, 0);
    ofSetLineWidth(2);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
//    ofSetColor(255, 255, 255);
//    font1.drawString("TESTING", -300, 40);

        for(float i = 0; i < 1080; i++){
            r = 100 + 300 * ofNoise(i/30, toff);
            int x = r * sin(i * TWO_PI/120);
            int y = r * cos(i * TWO_PI/120);
            theta++;
            ofSetColor(255 * ofNoise(i/100, toff), 0, 255 - 255 * ofNoise(i/100, toff));
            ofSetLineWidth(3);
            ofDrawLine(x, y, px, py);
            if(r >= 100 && r < 200){
                ofSetColor(255, 255, 255);
                //ofDrawCircle(x, y, c);
                ofSetLineWidth(3);
                ofDrawLine(x, y, px, py);
            }
            px = x;
            py = y;
        }
    
    toff += 0.003;
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
