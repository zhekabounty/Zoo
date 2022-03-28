#include "Zoo.h"

void Cell::ShowCell() {
	if (empty == 1) {
		cout << "Звук: " << animal->getVoice() << endl;
		cout << "Класс: " << animal->getClass() << endl;
		cout << "Вид: " << animal->getView() << endl;
		cout << "Возраст: " << animal->getAge() << endl << endl;
	}
	else {
		cout << "Пусто" << endl << endl;
	}
}

void Cell::ShowVoice() {
	if (empty == 1) {
		cout << "Звук из клетки: " << animal->getVoice() << endl;
	}
	else {
		cout << "" << endl << endl;
	}
}

Zoo::Zoo() {
	cout << "Добро пожаловать в зоопарк!" << endl;
	cout << "Введите количество клеток, которое вы хотите посмотреть: ";
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
		cout << "Клетка " << i + 1 << " : " << endl;
		cells[i].ShowCell();
	}	
}