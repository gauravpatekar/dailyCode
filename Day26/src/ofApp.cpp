#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //ofSetBackgroundColor(180, 220, 200);
    ofSetBackgroundColor(0, 0, 0);
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
        //skip[i] = (int)ofRandom(0, 2);
        skip[i] = 2;
    }
    for(int i = 0; i < 64; i++){
        tessellate[i] = (int)ofRandom(0, 3);
        tessellate2[i] = (int)ofRandom(0, 3);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //randomly skip cells
    //skip[(int)ofRandom(240)] = (int)ofRandom(0, 2);
    
    //randomly rotate cell
    angle[(int)ofRandom(240)] = (int)ofRandom(0, 3);

    ofTranslate(255, 255);
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(tessellate[i*6 + j] > 0){
                if(skip[count] != 0){
                    ofPushMatrix();
                    ofTranslate(i * s, j * s);
                    ofRotateDeg(90 * angle[count]);
                    
                    //circles in the back
                    //col = ofColor(i*50, j*50, 250 - i*50);
                    col.setHsb(((6-i)+j)*20, 250, 250);
                    ofSetColor(col);
                    
                    ofDrawRectangle(-s/2, -s/2, s, s);
                    ofDrawCircle(-s/2, -s/2, r);
                    ofDrawCircle(-s/2, s/2, r);
                    ofDrawCircle(s/2, -s/2, r);
                    ofDrawCircle(s/2, s/2, r);
                    //paths
                    col2.setHsb((250*ofNoise(toff))-(i+j)*20, 130, 250);
                    path1.setColor(col2);
                    path2.setColor(col2);
                    path1.draw();
                    path2.draw();
                    ofPopMatrix();
                }
                count++;
            }
        }
    }
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(tessellate[i*6 + j] == 0){
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
//                        col = ofColor(j*50, 250-i*50, 250-j*50);
                        col.setHsb((250*ofNoise(toff))-(i+j)*20, 130, 250);
                        ofSetColor(col);
                        ofDrawRectangle(-s/2, -s/2, s, s);
                        ofDrawCircle(-s/2, -s/2, r);
                        ofDrawCircle(-s/2, s/2, r);
                        ofDrawCircle(s/2, -s/2, r);
                        ofDrawCircle(s/2, s/2, r);
                        //paths
                        col2.setHsb(((6-i)+j)*20, 250, 250);
                        path1.setColor(col2);
                        path2.setColor(col2);
                        path1.draw();
                        path2.draw();
                        ofPopMatrix();
                        count2++;
                    }
                    count++;
                }
                path1.setColor(0);
                path2.setColor(0);
            }
        }
    }
    count = 0;
    toff += 0.001;

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
