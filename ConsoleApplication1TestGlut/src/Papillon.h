#pragma once
#include "GraphicPrimitives.h"


class Papillon {
    
public:
	Papillon(float _r, float _g, float _b, float posX_ = 0.0f, float posY_ = 0.0f) :
		posX(posX_)
		, posY(posY_)
		, width(0.1f)
		, height(0.1f)
		, VposX(0.01f)
		, VposY(0.02f)
		, Vwidth(0.01f)
		, Vheight(-0.02f)
		, r(_r)
		, g(_g)
		, b(_b) 
	{}

    float posX,posY,width,height;
    float VposX,VposY,Vwidth,Vheight;
	
	float r, g, b;
    
    void draw();
    void tick();
    
};