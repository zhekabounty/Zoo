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
	cout << "�����: " << class_ << endl;
	cout << "�����: " << detachment << endl;
	cout << "���: " << view << endl;
	cout << "�������: " << age << endl << endl;
}

