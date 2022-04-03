#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class Animal {
	int age;
public:
	Animal() :age(rand() % 20 + 8) {};
	virtual string getClass() = 0;
	virtual string getView() = 0;
	virtual string getVoice() = 0;
	virtual int getAge() { return age; }
};

/*
1. Волк
2. Медведь
3. Павлин
4. Жираф
5. Заяц
6. Лиса*/

class Predatory :public Animal { // хищники
public:
	Predatory() {};
	string getClass() { return "хищники"; }
};

class Wolf :public Predatory { // Волк
public:
	Wolf() {};
	string getVoice() { return "у-у-у"; }
	string getView() { return "Волк"; }
};

class Bear :public Predatory { // Медведь
public:
	Bear() {};
	string getVoice() { return "р-р-р"; }
	string getView() { return "Медведь"; }
};

class Fox :public Predatory { // Лиса
public:
	Fox() {};
	string getVoice() { return "фыр-фыр-фыр"; }
	string getView() { return "Лисица"; }
};

class Herbivores :public Animal {
public:
	Herbivores() {};
	string getClass() { return "травоядные"; }
};

class Giraffe :public Herbivores { // Жираф
public:
	Giraffe() {};
	string getVoice() { return "м-м-м"; }
	string getView() { return "Жираф"; }
};

class Peacock :public Herbivores { // Павлин
public:
	Peacock() {};
	string getVoice() { return "а-а-а"; }
	string getView() { return "Павлин"; }
};

class Hare :public Herbivores { // Заяц
public:
	Hare() {};
	string getVoice() { return "хр-хр-хр"; }
	string getView() { return "Заяц"; }
};