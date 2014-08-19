#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
	leap.open();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    Leap::ImageList images = leap.getImageList();
    for(int i = 0; i < 2; i++){
        Leap::Image image = images[i];
        if (image.data() > 0) {
            const unsigned char* image_buffer = image.data();
            ofImage leapImage;
            leapImage.setFromPixels(image_buffer, image.width(), image.height(), OF_IMAGE_GRAYSCALE);
            leapImage.draw(i * image.width(), image.height(), image.width(), image.height());
        }
    }

    ofDrawBitmapString(ofToString(ofGetFrameRate()) + " fps", 10, 10);
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

//--------------------------------------------------------------
void ofApp::exit(){
    // let's close down Leap and kill the controller
    leap.close();
}
