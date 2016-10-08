#pragma once
#include "GraphicPrimitives.h"

class Fourmi {

public:
	Fourmi(float _posX, float _posY, float _r = 1.0f, float _g = 0.0f, float _b = 1.0f) : 
		posX(_posX),
		posY(_posY),
		r(_r),
		g(_g),
		b(_b),
		VposX(0.001f),
		VposY(0.002f)
		{};

	float r, g, b;
	float posX, posY;
	float VposX, VposY;

	void draw();
	void move();
	

};