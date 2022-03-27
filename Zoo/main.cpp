#include "Animals.h"
#include <iostream>
#include <locale>
#include <stdlib.h>
#include <time.h>
#include <vector>

/* 1. Волк (Wolf)
2. Медведь (Bear)
3. Страус (Ostrich)
4. Павлин (Peacock)
5. Тигр (Tiger)
6. Слон (Elephant)
7. Лев (Leo)
8. Крокодил (Crocodile)
9. Жираф (Giraffe)
10. Лиса (Fox) */

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
			cout << "Клетка " << i + 1 << endl;
			Animals[i]->ShowAnimal();
		}
		else {
			cout << "Клетка " << i + 1 << endl;
			cout << "Пусто" << endl << endl;
		}
	}
	for (int i = 0; i < n; i++)
	{
		delete Animals[i];
	}
	return 0;
}