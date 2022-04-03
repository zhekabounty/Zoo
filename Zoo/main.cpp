#include "Animals.h"
#include "Zoo.h"
#include <iostream>
#include <locale>
#include <stdlib.h>
#include <time.h>

/* 1. Волк (Wolf)
2. Медведь (Bear)
3. Павлин (Peacock)
4. Жираф (Giraffe)
5. Заяц (Hare)
6. Лиса (Fox) */

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	Zoo z;
	z.ShowCells();
	z.ZooMenu();
}