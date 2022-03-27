#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class Animal {
	string class_; // �����
	string detachment; // �����
	string view; // ���
	int age; // �������
public:
	Animal() : class_("��� ������"), detachment("��� ������"), view("��� ������"), age(-1) {};
	Animal(string _class_, string _detachment, string _view, int _age) : class_(_class_), detachment(_detachment), view(_view), age(_age) {};
	Animal(const Animal& a);
	void ShowAnimal();
};

class Wolf :public Animal { // ����
public:
	Wolf() : Animal("�������������", "������", "���� ������������", rand() % 30 + 1) {};
};

class Bear :public Animal { // �������
public:
	Bear() : Animal("�������������", "������", "����������� ����� �������", rand() % 40 + 1) {};
};

class Ostrich :public Animal { // ������
public:
	Ostrich() : Animal("�����", "���������������", "����������� ������", rand() % 75 + 1) {};
};

class Peacock :public Animal { // ������
public:
	Peacock() : Animal("�����", "������������", "��������� ������", rand() % 20 + 1) {};
};

class Tiger :public Animal { // ����
public:
	Tiger() : Animal("�������������", "������", "����", rand() % 26 + 1) {};
};

class Elephant :public Animal { // ����
public:
	Elephant() : Animal("�������������", "��������", "����������� ����", rand() % 80 + 1) {};
};

class Leo :public Animal { // ���
public:
	Leo() : Animal("�������������", "������", "���", rand() % 25 + 1) {};
};

class Crocodile :public Animal { // ��������
public:
	Crocodile() : Animal("��������������", "���������", "���������� ��������", rand() % 80 + 1) {};
};

class Giraffe :public Animal { // �����
public:
	Giraffe() : Animal("�������������", "�����������������", "�����", rand() % 35 + 1) {};
};

class Fox :public Animal { // ����
public:
	Fox() : Animal("�������������", "������", "������������ ������", rand() % 25 + 1) {};
};



/*class Mammals :public Animal { // �������������
public:
	Mammals(string _detachment, string _family, string _view, int _age) : Animal("�������������", _detachment, _family, _view, _age) {};
};

class Predatory :public Mammals { // �������
public:
	Predatory(string _family, string _view, int _age) : Mammals("������", _family, _view, _age) {};
};

class Dogs :public Predatory { // ������
public:
	Dogs(string _view, int _age) : Predatory("������", _view, _age) {};
};

class Wolf : public Dogs { // ����
public:
	Wolf() : Dogs("���� ������������", (rand() % 50) + 15) { };
};*/






//class Wolf : public Animal {
//public:
//	Wolf() : Animal("����") {};
//	string getClass() { return "�������������"; };
//	string getDetachment() { return "������"; }
//	string getFamily() { return "������"; }
//	int getAge() { return (rand() % 50) + 15; }
//};
//
//class Bear : public Animal {
//public:
//	Bear() : Animal("�������") {};
//	string getClass() { return "�������������"; };
//	string getDetachment() { return "������"; }
//	string getFamily() { return "��������"; }
//	int getAge() { return (rand() % 50) + 15; }
//};
//
//class Bear : public Animal {
//	Bear() : Animal("�������") {};
//	string getClass() { return "�������������"; };
//	string getDetachment() { return "������"; }
//	string getFamily() { return "��������"; }
//	int getAge() { return (rand() % 50) + 15; }
//};
/*
1. ����
2. �������
3. ������
4. ������
5. ����
6. ����
7. ���
8. ��������
9. �����
10. ����*/