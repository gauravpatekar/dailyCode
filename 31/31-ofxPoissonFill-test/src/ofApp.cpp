#include "ofApp.h"
#define WIDTH 600
#define HEIGHT 600

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(255,255,255);
    
//    img.load("img.png"); // load the test image
    
    fbo.allocate(WIDTH,HEIGHT,GL_RGBA);
    pf.init(WIDTH,HEIGHT);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    fbo.begin();
//    ofPushStyle();
    ofClear(0,0,0,0);
    
//    img.draw((float)WIDTH-(float)(ofGetFrameNum()%WIDTH*2),0);
      
    ofNoFill();
    ofSetLineWidth(3);
    ofSetColor(255,255,255);
////    ofDrawRectangle(0, 0, 1, 500);
//    ofDrawRectangle(0, 0, 500, 1);
//
//    ofSetColor(25,255,255);
//    ofDrawRectangle(499, 0, 10, 500);
//    ofSetColor(255,255,255);
//    ofDrawRectangle(0, 399, 500, 10);
    ofDrawRectangle(0, 0, 500, 500);
    ofDrawRectangle(50, 50, 400, 400);
    ofDrawRectangle(100, 100, 300, 300);
    ofDrawRectangle(150, 150, 200, 200);
    ofDrawRectangle(200, 200, 100, 100);
//    ofSetColor(0,255,100);
//    ofDrawRectangle(100, 100, 100, 100);
//
//    ofSetColor(255,255,200);
//    ofDrawRectangle(300, 300, 100, 100);
//
//    ofSetColor(255,0,250);
//    ofDrawRectangle(300, 100, 10, 10);
//
//    ofSetColor(a/2, 255 - a/2, 250);
//    ofDrawRectangle(200, a, 50, 50);
//    ofSetColor(255 - a/2, a/2, 250);
//    ofDrawRectangle(215, a+15, 20, 20);
//    a += 1;
//    if (a > 500) a = 0;
    int a = 250 - 200 * sin(ofGetElapsedTimef());
    int b = 250 - 200 * sin(0.7 * ofGetElapsedTimef());
    ofSetColor(255, 0, 250);
    ofDrawCircle(a, b, 10);
//    ofDrawRectangle(a, b-100, 1, 200);
    
    int c = 250 - 200 * sin(0.6 * ofGetElapsedTimef());
    int d = 250 - 200 * sin(0.43 * ofGetElapsedTimef());
    ofSetColor(0, 250, 250);
    ofDrawCircle(c, d, 10);
    
    int e = 250 - 200 * sin(1.3 * ofGetElapsedTimef());
    int f = 250 - 200 * sin(1.7 * ofGetElapsedTimef());
    ofSetColor(250, 250, 0);
    ofDrawCircle(e, f, 10);
//    ofDrawRectangle(e-100, f, 200, 1);
    
//    ofPopStyle();
    fbo.end();
    // done drawing input

    // process the frame
    pf.process(fbo.getTexture());

    // draw the original image
//    fbo.draw(520,0);
    
    
    // draw the output
//    pf.getTexture().draw(WIDTH,0);
    pf.getTexture().draw(100,50);
    
    // track frame/sec
//    ofDrawBitmapStringHighlight("FPS: "+ofToString(ofGetFrameRate(),2),10,20);
    
//    ofDrawRectangle(400, 300, 100, 100);


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
