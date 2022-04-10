#include "Cage.h"

Cage::Cage() {
	fullness = 0;
	size = rand() % 3 + 2;
	animals = new Animal * [size];
}

Cage Cage::operator=(Cage& p) {
	delete[] animals;
	animals = new Animal * [p.size];
	for (int i = 0; i < p.size; i++) {
		animals[i] = p.animals[i];
	}
	size = p.size;
	fullness = p.fullness;
	return *this;
}

Cage::Cage(const Cage& p) {
	animals = new Animal * [p.size];
	for (int i = 0; i < p.size; i++) {
		animals[i] = p.animals[i];
	}
	size = p.size;
	fullness = p.fullness;
}

Cage::~Cage() {
	delete[] animals;
}

void Cage::AddAnimal(Animal* _animal) {
	if (fullness == size)
	{
		throw new AddAnimalError("������ �����������!");
	}
	if ((fullness < size) && (fullness > 0)) {
		if ((_animal->getClass() != animals[fullness - 1]->getClass()) || ((_animal->getClass() == "�������") && (animals[fullness - 1]->getClass() == "�������"))) {
			throw new AddAnimalError("�������� �� ����� ���� ������!");
		}
		animals[fullness] = _animal;
		fullness++;
	}
	if (fullness == 0) {
		animals[fullness] = _animal;
		fullness++;
	}
}

void Cage::ShowCell() {
	if (fullness == 0) {
		cout << "������ �����" << endl;
	}
	if (fullness > 0) {
		for (int i = 0; i < fullness; i++) {
			cout << "�����: " << animals[i]->getClass() << endl;
			cout << "���: " << animals[i]->getView() << endl;
			cout << "�������: " << animals[i]->getAge() << endl;
			cout << "�����: " << animals[i]->getVoice() << endl;
		}
	}
	cout << "����������� ������: " << size << endl << endl;
}