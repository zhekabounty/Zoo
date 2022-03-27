#include "Animals.h"
#include <iostream>
#include <locale>
#include <stdlib.h>
#include <time.h>
#include <vector>

/* 1. ���� (Wolf)
2. ������� (Bear)
3. ������ (Ostrich)
4. ������ (Peacock)
5. ���� (Tiger)
6. ���� (Elephant)
7. ��� (Leo)
8. �������� (Crocodile)
9. ����� (Giraffe)
10. ���� (Fox) */

using namespace std;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int n = 5;
	vector <Animal*> Animals(n);
	for (int i = 0; i < n; i++) {
		int empty = rand() % 2;
		if (empty != 0) {
			int animal = rand() % 10;
			switch (animal)
			{
			case 0: Animals[i] = new Wolf(); break;
			case 1: Animals[i] = new Bear(); break;
			case 2: Animals[i] = new Ostrich(); break;
			case 3: Animals[i] = new Peacock(); break;
			case 4: Animals[i] = new Tiger(); break;
			case 5: Animals[i] = new Elephant(); break;
			case 6: Animals[i] = new Leo(); break;
			case 7: Animals[i] = new Crocodile(); break;
			case 8: Animals[i] = new Giraffe(); break;
			case 9: Animals[i] = new Fox(); break;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (Animals[i] != NULL) {
			cout << "������ " << i + 1 << endl;
			Animals[i]->ShowAnimal();
		}
		else {
			cout << "������ " << i + 1 << endl;
			cout << "�����" << endl << endl;
		}
	}
	for (int i = 0; i < n; i++)
	{
		delete Animals[i];
	}
	return 0;
}