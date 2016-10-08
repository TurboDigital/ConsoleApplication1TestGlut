
#include "MyGameEngine.h"


void MyGameEngine::idle(){
    for (int i = 0; i < paps->size(); i++) {
        (*paps)[i]->tick();
		for (int j = 0; j < fourmis->size(); j++) {
			if ((*fourmis)[j]->posX > (*paps)[i]->posX && (*fourmis)[j]->posX < ((*paps)[i]->posX + (*paps)[i]->width)) {
				//(*fourmis).pop_back();
				(*fourmis).erase((*fourmis).begin() + j);
			}
		}
    }
	for (int i = 0; i < fourmis->size(); i++) {
		(*fourmis)[i]->move();
	}
}