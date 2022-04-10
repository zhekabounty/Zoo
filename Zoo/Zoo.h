#pragma once
#include "Animals.h"
#include "Cage.h"
#include "AddException.h"

class Zoo {
	Cage* cages;
	int size;
public:
	Zoo();
	~Zoo();
	void ShowCells();
	void ZooMenu();
	void AddCage();
};

int GetPointMenu(int count);