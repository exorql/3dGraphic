#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofEnableDepthTest(); // 深度テストを有効に
    ofEnableSmoothing(); // 表示をスムーズに
    
    // ライティングを有効に
    light.enable();
    light.setSpotlight();
    light.setPosition(-100, 100, 100);
    // 環境反射光の色
    light.setAmbientColor(ofFloatColor(0.5, 0.2, 0.2, 1.0));
    // 拡散反射光の色
    light.setDiffuseColor(ofFloatColor(0.5, 0.5, 1.0));
     // 鏡面反射光の色
    light.setSpecularColor(ofFloatColor(1.0, 1.0, 1.0));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    // cam.begin();とcam.end();で囲まれた範囲が、マウスのドラッグで視点変更可能になる
    cam.begin();
    
    ofSetColor(0,255,0);
    
    // 立方体
    box.set(200);
    box.setPosition(-150, 0, 0);
    box.drawWireframe();
    
    // 球
    sphere.set(100, 16); // 半径と面の細かさ
    sphere.setPosition(150, 0, 0);
    sphere.drawWireframe();
    
    cam.end();
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
