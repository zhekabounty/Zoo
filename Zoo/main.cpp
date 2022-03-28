#include "Animals.h"
#include "Zoo.h"
#include <iostream>
#include <locale>
#include <stdlib.h>
#include <time.h>

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
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	Zoo z;
	z.ShowCells();
}