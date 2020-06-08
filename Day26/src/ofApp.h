#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        void keyPressed(int key);
        void keyReleased(int key);
        void mouseMoved(int x, int y );
        void mouseDragged(int x, int y, int button);
        void mousePressed(int x, int y, int button);
        void mouseReleased(int x, int y, int button);
        void mouseEntered(int x, int y);
        void mouseExited(int x, int y);
        void windowResized(int w, int h);
        void dragEvent(ofDragInfo dragInfo);
        void gotMessage(ofMessage msg);
    
//    ofColor col1(ofSetColor(0, 0, 0));
//    ofColor col2(ofSetColor(255, 255, 255));
    
    int s = 100; //spacing
    int r = s/3; // circle radius
    int angle[240];
    int count = 0;
    int tessellate[64];
    int count2 = 0;
    int tessellate2[64];
    int skip[240];
    ofPath path1, path2;
    
    ofColor col, col2;
    
    float toff = 0;
        
};
