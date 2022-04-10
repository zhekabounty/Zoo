#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class Animal {
	int age;
public:
	Animal() :age(rand() % 20 + 8) {};
	virtual string getClass() = 0;
	virtual string getView() = 0;
	virtual string getVoice() = 0;
	virtual int getAge() { return age; }
};

class Wolf :public Animal { // ����
public:
	Wolf() {};
	string getClass() { return "�������"; }
	string getVoice() { return "�-�-�"; }
	string getView() { return "����"; }
};

class Bear :public Animal { // �������
public:
	Bear() {};
	string getClass() { return "�������"; }
	string getVoice() { return "�-�-�"; }
	string getView() { return "�������"; }
};

class Fox :public Animal { // ����
public:
	Fox() {};
	string getClass() { return "�������"; }
	string getVoice() { return "���-���-���"; }
	string getView() { return "������"; }
};

class Giraffe :public Animal { // �����
public:
	Giraffe() {};
	string getClass() { return "����������"; }
	string getVoice() { return "�-�-�"; }
	string getView() { return "�����"; }
};

class Peacock :public Animal { // ������
public:
	Peacock() {};
	string getClass() { return "����������"; }
	string getVoice() { return "�-�-�"; }
	string getView() { return "������"; }
};

class Hare :public Animal { // ����
public:
	Hare() {};
	string getClass() { return "����������"; }
	string getVoice() { return "��-��-��"; }
	string getView() { return "����"; }
};