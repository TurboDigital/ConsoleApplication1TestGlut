
#include "MyControlEngine.h"
#include <time.h>


void MyControlEngine::MouseCallback(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		
		std::srand(time(NULL));
		//create random RGB color
		float _rr = (float)std::rand()/RAND_MAX;
		float _gr = (float)std::rand()/RAND_MAX;
		float _br = (float)std::rand()/RAND_MAX;

        paps->push_back(new Papillon(_rr, _gr, _br, (x-400) / 400.f, (y-300)/ -300.f ));

		fourmis->push_back(new Fourmi((x - 400) / 400.f, (y - 300) / -300.f));
		
    }
}