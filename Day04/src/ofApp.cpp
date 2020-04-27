#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetLineWidth(2);
    ofSetCircleResolution(100);
    ofSetBackgroundColor(65, 82, 164);
    
    ofSetBackgroundColor(65, 82, 244);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0, 204, 232, 100);
    
    //Drawing - Fish
    
    for (int i = -50; i < 24; i++){
        int x = ofNoise(xoff + 0.005*i) * ofGetWidth();
        int y = ofNoise(yoff + 0.005*i) * ofGetHeight();
        
        //drawing the body
        //ofSetColor(abs(i)*5, 255+3*i, 0);
        ofSetColor(abs(i)*6, 255, 100-abs(i)*2);
        ofDrawCircle(x, y, 50-abs(i));
        
        //drawing the arms
           if(i < 0 && i > -25){
               //ofSetColor(0, 255, -i*4);
               ofSetColor(abs(i)*16, 255, 100-abs(i)*2);
               ofDrawCircle(x - 25 + i*2, y, 25 + i);
               ofDrawCircle(x + 25 - i*2, y, 25 + i);
        }
        
        //drawing the eyes
        if(i == 23){
            ofSetColor(0, 0, 0);
            ofDrawCircle(x-10, y-10, 10);
            ofDrawCircle(x+10, y-10, 10);
            ofSetColor(250, 250, 250);
            ofDrawCircle(x-10, y-10, 8);
            ofDrawCircle(x+10, y-10, 8);
            ofSetColor(0, 0, 0);
            ofDrawCircle(x-8, y-10, 3);
            ofDrawCircle(x+8, y-10, 3);
        }
    }
    
    xoff += 0.01;
    yoff += 0.007;
    
    
    /////////////////////////////////////
    // Drawing - Waves
    
    ofSetColor(87, 204, 232, 20);
    float zoff = 0;
    
    for(int i = 0; i < ofGetWidth(); i++){
        int yy = ofNoise(zoff, toff) * 300 + 100;
        line.addVertex(i, yy);
        ofDrawLine(line[i].x, line[i].y, line[i].x, ofGetHeight());
        zoff += 0.001;
    }
    line.draw();
    line.clear();
    
    for(int i = 0; i < ofGetWidth(); i++){
        int yy = ofNoise(zoff, toff) * 300 + 200;
        line2.addVertex(i, yy);
        ofDrawLine(line2[i].x, line2[i].y, line2[i].x, ofGetHeight());
        zoff += 0.001;
    }
    line2.draw();
    line2.clear();
    
    for(int i = 0; i < ofGetWidth(); i++){
        int yy = ofNoise(zoff, toff) * 300 + 300;
        line3.addVertex(i, yy);
        ofDrawLine(line3[i].x, line3[i].y, line3[i].x, ofGetHeight());
        zoff += 0.001;
    }
    line3.draw();
    line3.clear();

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
