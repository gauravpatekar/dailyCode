#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //ofSetBackgroundColor(200, 200, 200);
    ofSetBackgroundColor(180, 220, 200);
    ofSetCircleResolution(100);

    path1.setArcResolution(300);
    path1.setColor(0);
    path1.arc(s/2, s/2, 2*r, 2*r, 180, 270);
    path1.arc(s/2, 0, r/2, r/2, 270, 90);
    path1.arcNegative(s/2, s/2, r, r, 270, 180);
    path1.arc(0, s/2, r/2, r/2, 0, 180);
    path1.close();
    path1.draw();
    
    path2.setArcResolution(300);
    path2.setColor(0);
    path2.setFilled(true);
    path2.arc(-s/2, -s/2, 2*r, 2*r, 0, 90);
    path2.arc(-s/2, 0, r/2, r/2, 90, 270);
    path2.arcNegative(-s/2, -s/2, r, r, 90, 0);
    path2.arc(0, -s/2, r/2, r/2, 180, 0);
    path2.close();
    path2.draw();
    
    for(int i = 0; i < 240; i++){
        angle[i] = (int)ofRandom(0, 3);
        //angle[i] = 0;
        skip[i] = (int)ofRandom(0, 2);
    }
    for(int i = 0; i < 64; i++){
         tessellate[i] = (int)ofRandom(0, 3);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    skip[(int)ofRandom(240)] = (int)ofRandom(0, 2);

    angle[(int)ofRandom(240)] = (int)ofRandom(0, 3);

    ofTranslate(255, 255);
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(tessellate[i*8 + j] > 0){
                if(skip[count] != 0){
                    ofPushMatrix();
                    ofTranslate(i * s, j * s);
                    ofRotateDeg(90 * angle[count]);
                    
                    //circles in the back
                    col = ofColor(255, 255, 255);
                    ofSetColor(col);
                    ofDrawRectangle(-s/2, -s/2, s, s);
                    ofDrawCircle(-s/2, -s/2, r);
                    ofDrawCircle(-s/2, s/2, r);
                    ofDrawCircle(s/2, -s/2, r);
                    ofDrawCircle(s/2, s/2, r);
                    //paths
                    path1.draw();
                    path2.draw();
                    ofPopMatrix();
                }
                count++;
            }
        }
    }
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(tessellate[i*8 + j] == 0){
                for(int k = 0; k < 4; k++){
                    if(skip[count] != 0){
                        ofPushMatrix();
                        switch (k) {
                            case 0:
                                ofTranslate(i * s - s/4, j * s - s/4);
                                break;
                            case 1:
                                ofTranslate(i * s + s/4, j * s - s/4);
                                break;
                            case 2:
                                ofTranslate(i * s - s/4, j * s + s/4);
                                break;
                            case 3:
                                ofTranslate(i * s + s/4, j * s + s/4);
                                break;
                            default:
                                break;
                        }
                        ofRotateDeg(90 * angle[count]);
                        ofScale(0.5);
                        //circles in the back
                        col = ofColor(0, 0, 0);
                        ofSetColor(col);
                        ofDrawRectangle(-s/2, -s/2, s, s);
                        ofDrawCircle(-s/2, -s/2, r);
                        ofDrawCircle(-s/2, s/2, r);
                        ofDrawCircle(s/2, -s/2, r);
                        ofDrawCircle(s/2, s/2, r);
                        //paths
                        path1.setColor(255);
                        path2.setColor(255);
                        path1.draw();
                        path2.draw();
                        ofPopMatrix();
                    }
                    count++;
                }
                path1.setColor(0);
                path2.setColor(0);
            }
        }
    }
    count = 0;

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    for(int i = 0; i < 240; i++){
         angle[i] = (int)ofRandom(0, 3);
    }
    for(int i = 0; i < 64; i++){
         tessellate[i] = (int)ofRandom(0, 3);
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
