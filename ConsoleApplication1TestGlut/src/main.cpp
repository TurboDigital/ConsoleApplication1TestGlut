

#include <iostream>
#include "Engine.h"

#include "MyGraphicEngine.h"
#include "MyGameEngine.h"
#include "MyControlEngine.h"


int main(int argc, char * argv[])
{
    
    Engine e(argc,argv);
    
    std::vector<Papillon *> paps;
	std::vector<Fourmi *> fourmis;
    
    GraphicEngine * ge = new MyGraphicEngine(&paps, &fourmis);
    GameEngine * gme = new MyGameEngine(&paps, &fourmis);
    ControlEngine * ce = new MyControlEngine(&paps, &fourmis);
    
    e.setGraphicEngine(ge);
    e.setGameEngine(gme);
    e.setControlEngine(ce);
    
    e.start();
    return 0;
}
