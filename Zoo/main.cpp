#include "Animals.h"
#include "Zoo.h"
#include <iostream>
#include <locale>
#include <stdlib.h>
#include <time.h>

/* 1. ���� (Wolf)
2. ������� (Bear)
3. ������ (Peacock)
4. ����� (Giraffe)
5. ���� (Hare)
6. ���� (Fox) */

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	Zoo z;
	z.ShowCells();
	z.ZooMenu();
}