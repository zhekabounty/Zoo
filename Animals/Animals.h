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

/*
1. ����
2. �������
3. ������
4. �����
5. ����
6. ����*/

class Predatory :public Animal { // �������
public:
	Predatory() {};
	string getClass() { return "�������"; }
};

class Wolf :public Predatory { // ����
public:
	Wolf() {};
	string getVoice() { return "�-�-�"; }
	string getView() { return "����"; }
};

class Bear :public Predatory { // �������
public:
	Bear() {};
	string getVoice() { return "�-�-�"; }
	string getView() { return "�������"; }
};

class Fox :public Predatory { // ����
public:
	Fox() {};
	string getVoice() { return "���-���-���"; }
	string getView() { return "������"; }
};

class Herbivores :public Animal {
public:
	Herbivores() {};
	string getClass() { return "����������"; }
};

class Giraffe :public Herbivores { // �����
public:
	Giraffe() {};
	string getVoice() { return "�-�-�"; }
	string getView() { return "�����"; }
};

class Peacock :public Herbivores { // ������
public:
	Peacock() {};
	string getVoice() { return "�-�-�"; }
	string getView() { return "������"; }
};

class Hare :public Herbivores { // ����
public:
	Hare() {};
	string getVoice() { return "��-��-��"; }
	string getView() { return "����"; }
};