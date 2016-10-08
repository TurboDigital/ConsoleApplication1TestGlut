#include "Fourmi.h"

void Fourmi::draw() {
	GraphicPrimitives::drawFillTriangle2D(posX, posY, posX - 0.05f, posY - 0.05f, posX + 0.05f, posY - 0.05f, r, g, b);
}

void Fourmi::move() {
	//TO DO ant's movements and try to run it
	posX += VposX;
	if (posX > 1.0f || posX < -1.0f) {
		VposX = -VposX;
		posX += VposX;
	}
	posY += VposY;
	if (posY > 1.0f || posY < -1.0f) {
		VposY = -VposY;
		posY += VposY;
	}
}