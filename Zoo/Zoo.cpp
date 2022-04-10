#include "Zoo.h"

Zoo::Zoo() {
	size = 5;
	cages = new Cage[size];
	for (int i = 0; i < size; i++) {
		int animal = rand() % 7;
		switch (animal)
		{
		case 0: break;
		case 1: cages[i].AddAnimal(new Wolf()); break;
		case 2: cages[i].AddAnimal(new Bear()); break;
		case 3: cages[i].AddAnimal(new Peacock()); break;
		case 4: cages[i].AddAnimal(new Giraffe()); break;
		case 5: cages[i].AddAnimal(new Fox()); break;
		case 6: cages[i].AddAnimal(new Hare()); break;
		}
	}
}
Zoo::~Zoo() {
	delete[] cages;
}

void Zoo::ShowCells(){
	for (int i = 0; i < size; i++)
	{
		cout << "������ " << i + 1 << " : " << endl;
		cages[i].ShowCell();
	}
}

void Zoo::ZooMenu() {
	int tmp;
	cout << "������ �������� �������� � �������?" << endl;
	cout << "1. ��" << endl;
	cout << "2. ���" << endl;
	cout << ">";
	tmp = GetPointMenu(2);
	if (tmp == 1) {
		system("cls");
		cout << "�������� ��������, ������� �� ������ ��������: " << endl;
		cout << "1. ����" << endl;
		cout << "2. �������" << endl;
		cout << "3. ������" << endl;
		cout << "4. �����" << endl;
		cout << "5. ����" << endl;
		cout << "6. ����" << endl;
		cout << ">";
		int animal_point = GetPointMenu(6);
		int flag = 0;
		Animal* animal = 0;
		switch (animal_point) {
		case 1: animal = new Wolf(); break;
		case 2: animal = new Bear(); break;
		case 3: animal = new Peacock(); break;
		case 4: animal = new Giraffe(); break;
		case 5: animal = new Fox(); break;
		case 6: animal = new Hare(); break;
		}
		for (int i = 0; i < size; i++) {
			try {
				cages[i].AddAnimal(animal);
				flag = 1;
				cout << "�������� �������� � " << i + 1 << " ������!" << endl;
				system("pause");
				break;
			} catch (AddException* e) {
				//cout << "������ " << i + 1 << ": ";
				//e->show();
				//flag = 1;
				//system("pause");
			}
		}
		if (flag == 0) {
			cout << "��� ���������� ������ ��� ����� ���������!" << endl;
			cout << "�������� �����..." << endl;
			system("pause");
			AddCage();
			cages[size - 1].AddAnimal(animal);
		}
	}
}

void Zoo::AddCage() {
	Cage* newCages = new Cage[size+1];
	for (int i = 0; i < size; i++) {
		newCages[i] = cages[i];
	}
	delete[] cages;
	size++;
	cages = newCages;
}

int GetPointMenu(int count) {
	int point;
	cin >> point;
	while (point < 1 || point > count) {
		cout << "�������� �������. ������� �����: ";
		cin >> point;
	}
	return point;
}