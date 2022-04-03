#include "Zoo.h"

Cell::Cell(Animal* _animal) {
	AddAnimal(_animal);
	fullness = 1;
}

void Cell::AddAnimal(Animal* _animal) {
	if (fullness == 2)
	{
		cout << "������ �����������!" << endl;
	}
	if (fullness == 1) {
		if ((_animal->getClass() != animal_1->getClass()) || ((_animal->getClass() == "�������") && (animal_1->getClass() == "�������"))) {
			throw new AddAnimalError("�������� �� ����� ���� ������!");
		}
		animal_2 = _animal;
		fullness++;
	}
	if (fullness == 0) {
		animal_1 = _animal;
		fullness++;
	}
}

void Cell::ShowCell() {
	if (fullness == 0) {
		cout << "������ �����" << endl << endl;
	}
	if (fullness == 1) {
		cout << "�����: " << animal_1->getClass() << endl;
		cout << "���: " << animal_1->getView() << endl;
		cout << "�������: " << animal_1->getAge() << endl;
		cout << "�����: " << animal_1->getVoice() << endl << endl;
	}
	if (fullness == 2) {
		cout << "�������� 1: " << endl;
		cout << "�����: " << animal_1->getClass() << endl;
		cout << "���: " << animal_1->getView() << endl;
		cout << "�������: " << animal_1->getAge() << endl;
		cout << "�����: " << animal_1->getVoice() << endl << endl;
		//
		cout << "�������� 2: " << endl;
		cout << "�����: " << animal_2->getClass() << endl;
		cout << "���: " << animal_2->getView() << endl;
		cout << "�������: " << animal_2->getAge() << endl;
		cout << "�����: " << animal_1->getVoice() << endl << endl;
	}
}

Zoo::Zoo() {
	size = 5;
	cells = new Cell[size];
	for (int i = 0; i < size; i++) {
		int animal = rand() % 7;
		switch (animal)
		{
		case 0: break;
		case 1: cells[i].AddAnimal(new Wolf()); break;
		case 2: cells[i].AddAnimal(new Bear()); break;
		case 3: cells[i].AddAnimal(new Peacock()); break;
		case 4: cells[i].AddAnimal(new Giraffe()); break;
		case 5: cells[i].AddAnimal(new Fox()); break;
		case 6: cells[i].AddAnimal(new Hare()); break;
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

void Zoo::ZooMenu() {
	int tmp;
	cout << "������ �������� �������� � ������?" << endl;
	cout << "1. ��" << endl;
	cout << "2. ���" << endl;
	cout << ">";
	tmp = GetPointMenu(2);
	if (tmp == 1) {
		system("cls");
		ShowCells();
		cout << "������� ����� ������, � ������� ������ �������� �������� (1-10): " << endl;
		cout << ">";
		tmp = GetPointMenu(10);
		if (cells[tmp-1].getFullness() == 2) {
			cout << "������ �����������!" << endl;
		}
		else {
			system("cls");
			cells[tmp-1].ShowCell();
			cout << "�������� ��������, ������� �� ������ ��������: " << endl;
			cout << "1. ����" << endl;
			cout << "2. �������" << endl;
			cout << "3. ������" << endl;
			cout << "4. �����" << endl;
			cout << "5. ����" << endl;
			cout << "6. ����" << endl;
			cout << ">";
			int animal = GetPointMenu(6);
			int flag = 0;
			try {
				switch (animal) {
				case 1: cells[tmp - 1].AddAnimal(new Wolf()); break;
				case 2: cells[tmp - 1].AddAnimal(new Bear()); break;
				case 3: cells[tmp - 1].AddAnimal(new Peacock()); break;
				case 4: cells[tmp - 1].AddAnimal(new Giraffe()); break;
				case 5: cells[tmp - 1].AddAnimal(new Fox()); break;
				case 6: cells[tmp - 1].AddAnimal(new Hare()); break;
				}
			}
			catch (AddException* e) {
				e->show();
				flag = 1;
			}
			if (flag == 0) {
				system("cls");
				cout << "�������� ������� ���������!" << endl;
				ShowCells();
			}
		}
	}
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