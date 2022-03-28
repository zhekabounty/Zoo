#pragma once
#include "Animals.h"

class Cell {
	Animal* animal;
	int empty;
public:
	Cell() :animal(0), empty(0) {};
	Cell(Animal* _animal) : animal(_animal), empty(1) {};
	void ShowCell();
	void ShowVoice();
};

class Zoo {
	Cell* cells;
	int size;
public:
	Zoo();
	~Zoo();
	void ShowCells();
};