#include "Animals.h"
#include <iostream>
using namespace std;

Animal::Animal(const Animal& a) {
	class_ = a.class_;
	detachment = a.detachment;
	view = a.view;
	age = a.age;
}

void Animal::ShowAnimal() {
	cout << "Класс: " << class_ << endl;
	cout << "Отряд: " << detachment << endl;
	cout << "Вид: " << view << endl;
	cout << "Возраст: " << age << endl << endl;
}

