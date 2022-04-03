#pragma once
#include "Animals.h"
#include "AddException.h"
#include <vector>

class Cell {
	Animal* animal_1;
	Animal* animal_2;
	int fullness;
public:
	Cell() : animal_1(0), animal_2(0), fullness(0) {};
	Cell(Animal* _animal);
	void AddAnimal(Animal* _animal);
	void ShowCell();
	int getFullness() { return fullness; };
};

class Zoo {
	Cell* cells;
	int size;
public:
	Zoo();
	~Zoo();
	void ShowCells();
	void ZooMenu();
};

int GetPointMenu(int count);