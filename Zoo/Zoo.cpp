#include "Zoo.h"

void Cell::ShowCell() {
	if (empty == 1) {
		cout << "����: " << animal->getVoice() << endl;
		cout << "�����: " << animal->getClass() << endl;
		cout << "���: " << animal->getView() << endl;
		cout << "�������: " << animal->getAge() << endl << endl;
	}
	else {
		cout << "�����" << endl << endl;
	}
}

void Cell::ShowVoice() {
	if (empty == 1) {
		cout << "���� �� ������: " << animal->getVoice() << endl;
	}
	else {
		cout << "" << endl << endl;
	}
}

Zoo::Zoo() {
	cout << "����� ���������� � �������!" << endl;
	cout << "������� ���������� ������, ������� �� ������ ����������: ";
	cin >> size;
	cells = new Cell[size];
	for (int i = 0; i < size; i++) {
		int empty = rand() % 2;
		if (empty != 0) {
			int animal = rand() % 10;
			switch (animal)
			{
			case 0: cells[i] = new Wolf(); break;
			case 1: cells[i] = new Bear(); break;
			case 2: cells[i] = new Ostrich(); break;
			case 3: cells[i] = new Peacock(); break;
			case 4: cells[i] = new Tiger(); break;
			case 5: cells[i] = new Elephant(); break;
			case 6: cells[i] = new Leo(); break;
			case 7: cells[i] = new Crocodile(); break;
			case 8: cells[i] = new Giraffe(); break;
			case 9: cells[i] = new Fox(); break;
			}
		}
	}
}
Zoo::~Zoo() {
	delete[] cells;
}

void Zoo::ShowCells(){
	for (int i = 0; i < size; i++)
	{
		cout << "������ " << i + 1 << " : " << endl;
		cells[i].ShowCell();
	}	
}