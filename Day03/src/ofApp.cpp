#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetLineWidth(2);
    //ofBackground(194, 218, 204);

    //ofDrawCircle(100, 100, 50);
    
    //light Pink
    //ofBackground(255, 165, 177);
    //yellow
    //ofBackground(255, 230, 177);
    //red
    //ofBackground(204, 31, 54);
    //deep blue
    ofBackground(65, 82, 164);
    ofSetCircleResolution(300);
    

}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    // Drawing - Sun
    for(int i = 0; i < 8; i++){
        //orange
        //ofSetColor(255, 70, 34, 90 - i*20);
        //yellow
        ofSetColor(255, 230, 0, 90 - i*20);
        
        ofDrawCircle(200, 200, 100 + (i*30 * ( 0.8 + 0.2 * sin(ofGetElapsedTimef()))));
    }
        
    
    //dark blue
    //ofSetColor(1, 114, 154, 70);
    //orange
    //ofSetColor(255, 70, 34, 70);
    //yellow
    //ofSetColor(255, 230, 0, 40);
    //deep Blue
    ofSetColor(87, 204, 232, 70);


    
    float xoff = 0;
    
    for(int i = 0; i < ofGetWidth(); i++){
        int yy = ofNoise(xoff, toff)*300 + 50 + ofGetHeight()/2;
        line.addVertex(i, yy);
        ofDrawLine(line[i].x, line[i].y, line[i].x, ofGetHeight());
        xoff += 0.001;
    }
    line.draw();
    line.clear();
    
//    DRAWING SHIP
//    int x1 = line[700].x;
//    int y1 = line[700].y;
//    int x2 = line[750].x;
//    int y2 = line[750].y;
//    ofDrawCircle(x1, y1, 10);
//    ofDrawLine(x1, y1, x2, y2);
    
    
    for(int i = 0; i < ofGetWidth(); i++){
        int yy = ofNoise(xoff, toff + 0.00) * 300 + 50 + ofGetHeight()/2;
        line2.addVertex(i, yy);
        ofDrawLine(line2[i].x, line2[i].y, line2[i].x, ofGetHeight());
        xoff += 0.001;
    }
    line2.draw();
    line2.clear();
    
    for(int i = 0; i < ofGetWidth(); i++){
        int yy = ofNoise(xoff, toff + 0.00) * 300 + 50 + ofGetHeight()/2;
        line3.addVertex(i, yy);
        ofDrawLine(line3[i].x, line3[i].y, line3[i].x, ofGetHeight());
        xoff += 0.001;
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
