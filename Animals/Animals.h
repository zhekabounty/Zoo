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

class Wolf :public Animal { // Волк
public:
	Wolf() {};
	string getClass() { return "хищники"; }
	string getVoice() { return "у-у-у"; }
	string getView() { return "Волк"; }
};

class Bear :public Animal { // Медведь
public:
	Bear() {};
	string getClass() { return "хищники"; }
	string getVoice() { return "р-р-р"; }
	string getView() { return "Медведь"; }
};

class Fox :public Animal { // Лиса
public:
	Fox() {};
	string getClass() { return "хищники"; }
	string getVoice() { return "фыр-фыр-фыр"; }
	string getView() { return "Лисица"; }
};

class Giraffe :public Animal { // Жираф
public:
	Giraffe() {};
	string getClass() { return "травоядные"; }
	string getVoice() { return "м-м-м"; }
	string getView() { return "Жираф"; }
};

class Peacock :public Animal { // Павлин
public:
	Peacock() {};
	string getClass() { return "травоядные"; }
	string getVoice() { return "а-а-а"; }
	string getView() { return "Павлин"; }
};

class Hare :public Animal { // Заяц
public:
	Hare() {};
	string getClass() { return "травоядные"; }
	string getVoice() { return "хр-хр-хр"; }
	string getView() { return "Заяц"; }
};