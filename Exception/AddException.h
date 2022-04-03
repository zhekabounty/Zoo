#pragma once
#include <iostream>
#include <string>
using namespace std;

class AddException {
public:
	virtual void show() = 0;
};

class AddAnimalError :public AddException {
	string s;
public:
	AddAnimalError(string _s) : s(_s) {};
	void show();
};