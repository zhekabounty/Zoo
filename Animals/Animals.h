#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class Animal {
	string class_; // класс
	string detachment; // отряд
	string view; // вид
	int age; // возраст
public:
	Animal() : class_("Нет данных"), detachment("Нет данных"), view("Нет данных"), age(-1) {};
	Animal(string _class_, string _detachment, string _view, int _age) : class_(_class_), detachment(_detachment), view(_view), age(_age) {};
	Animal(const Animal& a);
	void ShowAnimal();
};

class Wolf :public Animal { // Волк
public:
	Wolf() : Animal("млекопитающие", "хищные", "волк обыкновенный", rand() % 30 + 1) {};
};

class Bear :public Animal { // Медведь
public:
	Bear() : Animal("млекопитающие", "хищные", "Европейский бурый медведь", rand() % 40 + 1) {};
};

class Ostrich :public Animal { // Страус
public:
	Ostrich() : Animal("птицы", "страусообразные", "Африканский страус", rand() % 75 + 1) {};
};

class Peacock :public Animal { // Павлин
public:
	Peacock() : Animal("птицы", "курообразные", "Индийский павлин", rand() % 20 + 1) {};
};

class Tiger :public Animal { // Тигр
public:
	Tiger() : Animal("млекопитающие", "хищные", "тигр", rand() % 26 + 1) {};
};

class Elephant :public Animal { // Слон
public:
	Elephant() : Animal("млекопитающие", "хоботные", "Африканский слон", rand() % 80 + 1) {};
};

class Leo :public Animal { // Лев
public:
	Leo() : Animal("млекопитающие", "хищные", "лев", rand() % 25 + 1) {};
};

class Crocodile :public Animal { // Крокодил
public:
	Crocodile() : Animal("пресмыкающиеся", "крокодилы", "острорылый крокодил", rand() % 80 + 1) {};
};

class Giraffe :public Animal { // Жираф
public:
	Giraffe() : Animal("млекопитающие", "китопарнокопытные", "жираф", rand() % 35 + 1) {};
};

class Fox :public Animal { // Лиса
public:
	Fox() : Animal("млекопитающие", "хищные", "обыкновенная лисица", rand() % 25 + 1) {};
};



/*class Mammals :public Animal { // млекопитающие
public:
	Mammals(string _detachment, string _family, string _view, int _age) : Animal("млекопитающие", _detachment, _family, _view, _age) {};
};

class Predatory :public Mammals { // хищники
public:
	Predatory(string _family, string _view, int _age) : Mammals("хищные", _family, _view, _age) {};
};

class Dogs :public Predatory { // псовые
public:
	Dogs(string _view, int _age) : Predatory("псовые", _view, _age) {};
};

class Wolf : public Dogs { // волк
public:
	Wolf() : Dogs("волк обыкновенный", (rand() % 50) + 15) { };
};*/






//class Wolf : public Animal {
//public:
//	Wolf() : Animal("Волк") {};
//	string getClass() { return "млекопитающие"; };
//	string getDetachment() { return "хищные"; }
//	string getFamily() { return "псовые"; }
//	int getAge() { return (rand() % 50) + 15; }
//};
//
//class Bear : public Animal {
//public:
//	Bear() : Animal("Медведь") {};
//	string getClass() { return "млекопитающие"; };
//	string getDetachment() { return "хищные"; }
//	string getFamily() { return "медвежьи"; }
//	int getAge() { return (rand() % 50) + 15; }
//};
//
//class Bear : public Animal {
//	Bear() : Animal("Медведь") {};
//	string getClass() { return "млекопитающие"; };
//	string getDetachment() { return "хищные"; }
//	string getFamily() { return "медвежьи"; }
//	int getAge() { return (rand() % 50) + 15; }
//};
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