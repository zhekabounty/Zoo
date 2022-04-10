#pragma once
#include "Animals.h"
#include "AddException.h"

class Cage {
	Animal** animals;
	int fullness;
	int size;
public:
	Cage();
	virtual ~Cage();
	Cage(const Cage& p);
	Cage operator=(Cage& p);
	void AddAnimal(Animal* _animal);
	void ShowCell();
	int getSize() { return size; };
	int getFullness() { return fullness; };
	Animal& getMainAnimal() { return *(animals[0]); };
};