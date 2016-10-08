#pragma once

#include "Engine.h"
#include "Papillon.h"
#include "Fourmi.h"
class MyGameEngine:public GameEngine {
    std::vector<Papillon * > *paps;
	std::vector<Fourmi * > *fourmis;
public:
    
    MyGameEngine(std::vector<Papillon * > * paps_, std::vector<Fourmi * > * fourmis_):
		paps(paps_),
		fourmis(fourmis_)
	{}
    
    virtual void idle();
    
};
