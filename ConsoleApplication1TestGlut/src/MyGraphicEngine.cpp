
#include "MyGraphicEngine.h"
#include <sstream>

void MyGraphicEngine::Draw(){
    
    
    GraphicPrimitives::drawLine2D(x1,0.5f,x2,-0.5f,1.0f,0.0f,1.0f);
    GraphicPrimitives::drawText2D(str,-1.0f,0.9f,0.0f,0.0f, 1.0f);

	/*
	GraphicPrimitives::drawLine2D(-0.5f, 0.5f, -0.7, 0.6f, 1.0f, 0.0f, 1.0f); //triangle
	GraphicPrimitives::drawLine2D(0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 1.0f);	//0,0 -> 1,1
	GraphicPrimitives::drawLine2D(0.0f, 0.0f, 1.0f, -1.0f, 1.0f, 0.5f, 0.5f);	//0,0 -> (1,-1)
	GraphicPrimitives::drawLine2D(0.0f, 0.0f, -0.8f, 0.8f, 1.0f, 0.5f, 0.5f);	//0,0 -> (1,-1)
	GraphicPrimitives::drawLine2D(0.0f, 0.0f, -1.0f, -1.0f, 1.0f, 0.5f, 0.5f);	//0,0 -> (-1,-1)

	GraphicPrimitives::drawFillTriangle2D(0.0f, 0.0f, -0.05f, -0.05f, 0.05f, -0.05f, 0.0f, 0.0f, 1.0f);
	*/

	//create a os stream to convert int to string
	std::ostringstream oss;
	oss << "butterfly:" << paps->size() << " ants:" << fourmis->size();
	std::string chr = oss.str();	//copy from stream to strin
	
	char * papsCount = new char[chr.length() + 1];	//create count of papillons
	std::strcpy(papsCount,chr.c_str());				//copy string to char
	
	GraphicPrimitives::drawText2D(papsCount, -0.5f, 0.9f, 0.0f, 0.0f, 1.0f);	//draw nr of papillons
    
    for (int i = 0; i < paps->size(); i++) {
        (*paps)[i]->draw();
    }

	for (int i = 0; i < fourmis->size(); i++) {
		(*fourmis)[i]->draw();
	}
    
    
    x1 += vx1;
    if (x1 > 0.9f || x1 < -0.9f) {
        vx1 = -vx1;
        x1 += vx1;
    }
    
    x2 += vx2;
    if (x2 > 0.9f || x2 < -0.9f) {
        vx2 = -vx2;
        x2 += vx2;
    }
    
}

