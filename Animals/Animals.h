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
3. Страус
4. Павлин
5. Тигр
6. Слон
7. Лев
8. Крокодил
9. Жираф
10. Лиса*/

class Predatory :public Animal { // хищники
	string class_;
public:
	Predatory() : class_("хищники") {};
	string getClass() { return class_; }
};

class Wolf :public Predatory { // Волк
	string view;
	string voice;
public:
	Wolf() : view("Белый волк"), voice("у-у-у") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Bear :public Predatory { // Медведь
	string view;
	string voice;
public:
	Bear() : view("Европейский бурый медведь"), voice("р-р-р") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Tiger :public Predatory { // Тигр
	string view;
	string voice;
public:
	Tiger() : view("Амурский тигр"), voice("р-р-р") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Leo :public Predatory { // Лев
	string view;
	string voice;
public:
	Leo() : view("Персидский лев"), voice("р-р-р") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Crocodile :public Predatory { // Крокодил
	string view;
	string voice;
public:
	Crocodile() : view("Острорылый крокодил"), voice("р-р-р") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Fox :public Predatory { // Лиса
	string view;
	string voice;
public:
	Fox() : view("Афганская лисица"), voice("фыр-фыр-фыр") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Herbivores :public Animal {
	string class_;
public:
	Herbivores() :class_("травоядные") {};
	string getClass() { return class_; }
};

class Giraffe :public Herbivores { // Жираф
	string view;
	string voice;
public:
	Giraffe() : view("Угандийский жираф"), voice("м-м-м") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Ostrich :public Herbivores { // Страус
	string view;
	string voice;
public:
	Ostrich() : view("Африканский страус"), voice("о-о-о") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Peacock :public Herbivores { // Павлин
	string view;
	string voice;
public:
	Peacock() : view("Индийский павлин"), voice("а-а-а") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Elephant :public Herbivores { // Слон
	string view;
	string voice;
public:
	Elephant() : view("Африканский слон"), voice("ву-ву-ву") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};