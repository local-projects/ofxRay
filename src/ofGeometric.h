#pragma once
//
//  ofGeometric.h
//  ofxRay
//
//  Elliot Woods (C) 2012, MIT license
//	http://www.kimchiandchips.com
//

#include "ofMain.h"

class ofGeometric {
public:
	ofGeometric();
	ofGeometric(ofColor color);
	
	void randomiseColor();
	void randomise(float amplitude=1.0f);
	
	virtual void draw() const = 0;	
	virtual void randomiseVectors(float amplitude=1.0f) = 0;

	ofColor color;
};