#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetLineWidth(2);
    ofSetCircleResolution(100);
    ofSetBackgroundColor(0, 0, 0);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //drawing - onion
    for (int j = 0; j < 1; j++){
        for (int i = 0; i > -50; i--){
            int x = ofNoise(xoff + 0.005*i + 1.3*j) * 1 * ofGetWidth() - 0.0 * ofGetWidth()/2;
            int y = ofNoise(yoff + 0.005*i + 3.7*j) * 1 * ofGetHeight() - 0.0 * ofGetHeight()/2;
            //drawing the center
            //ofSetColor(abs(i)*abs(i)/10, 0*abs(i)/2, 2*abs(i));
            //ofSetColor(abs(i)*abs(i)/10, 3*abs(i), 0);
            ofSetColor(abs(i)*abs(i)/10, abs(i)*abs(i)/10, abs(i)*abs(i)/10);
            ofDrawCircle(x, y, 50-abs(i));
            
            //drawing the arms
            //layer one
            ofPushMatrix();
            ofTranslate(x, y);
                ofDrawCircle(0 + i*2, 0, 50 + i);
                ofDrawCircle(0 - i*2, 0, 50 + i);
                ofDrawCircle(0, -i*2, 50 + i);
                ofDrawCircle(0, i*2, 50 + i);
            ofPopMatrix();
            ofPushMatrix();
            ofTranslate(x, y);
            ofRotateDeg(45);
                ofDrawCircle(0 + i*2, 0, 50 + i);
                ofDrawCircle(0 - i*2, 0, 50 + i);
                ofDrawCircle(0, -i*2, 50 + i);
                ofDrawCircle(0, i*2, 50 + i);
            ofPopMatrix();
       
            //layer two
            for(int k = 0; k < 3; k++){
                ofPushMatrix();
                ofTranslate(x, y);
                ofRotateDeg(30 * k);
                ofDrawCircle(0 + i*3.5, 0, 50 + i);
                ofDrawCircle(0 - i*3.5, 0, 50 + i);
                ofDrawCircle(0, -i*3.5, 50 + i);
                ofDrawCircle(0, i*3.5, 50 + i);
                ofPopMatrix();
            }

            //layer three
            for(int k = 0; k < 4; k++){
                ofPushMatrix();
                ofTranslate(x, y);
                ofRotateDeg(22.5 * k);
                    ofDrawCircle(i*5, 0, 50 + i);
                    ofDrawCircle(-i*5, 0, 50 + i);
                    ofDrawCircle(0, i*5, 50 + i);
                    ofDrawCircle(0, -i*5, 50 + i);
                ofPopMatrix();
            }
        }
    }
    
    xoff += 0.007;
    yoff += 0.002;

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
