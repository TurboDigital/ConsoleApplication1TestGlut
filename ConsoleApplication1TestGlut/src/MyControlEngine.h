#pragma once

#include "Engine.h"
#include "Fourmi.h"
#include "Papillon.h"

class MyControlEngine:public ControlEngine {
    std::vector<Papillon * > *paps;
	std::vector<Fourmi * > *fourmis;
public:
    MyControlEngine(std::vector<Papillon * > * paps_, std::vector<Fourmi * > * fourmis_):
		paps(paps_),
		fourmis(fourmis_)
	{}
    
    virtual void MouseCallback(int button, int state, int x, int y) ;
};
