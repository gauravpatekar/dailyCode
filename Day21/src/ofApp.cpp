#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(240, 235, 210);
    ofSetColor(0, 0, 0);
    
    for(int i = 0; i < 64; i++){
        angle[i] = (int)ofRandom(0, 3);
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(255, 255);
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            
            ofPushMatrix();
            ofTranslate(i * s, j * s);
            ofRotateDeg(90 * angle[i * 8 + j]);
            
            ofPath path1, path2, path3, path4;
            path1.arc(-r, -r, r, r, -2, 92);
            path2.arc(r, r, r, r, 178, 272);
            
            path1.setFilled(false);
            path2.setFilled(false);
            
            float strokeWidth = 15 * ofNoise( (float)i /5, (float)j /5, toff) - 3;
            path1.setStrokeWidth(strokeWidth);
            path2.setStrokeWidth(strokeWidth);
            
            path1.setStrokeColor(0);
//            path2.setStrokeColor(0);
            path2.setStrokeColor(ofColor(255, 100, 0));

//            path1.setStrokeColor(ofColor(i*3, j*3, 0));
//            path2.setStrokeColor(ofColor(0, 255-i*3, j*3));

            path1.setArcResolution(300);
            path2.setArcResolution(300);

            path1.draw();
            path2.draw();
  
            ofPopMatrix();
        }
    }
    toff += 0.01;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    int temp = (int)ofRandom(64);
    angle[temp] += 1;
    if(angle[temp] == 4){
        angle[temp] = 0;
    }

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
