#include "Animals.h"
#include "Zoo.h"
#include <iostream>
#include <locale>
#include <stdlib.h>
#include <time.h>

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
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	Zoo z;
	z.ShowCells();
}