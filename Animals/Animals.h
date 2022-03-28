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
4. ������
5. ����
6. ����
7. ���
8. ��������
9. �����
10. ����*/

class Predatory :public Animal { // �������
	string class_;
public:
	Predatory() : class_("�������") {};
	string getClass() { return class_; }
};

class Wolf :public Predatory { // ����
	string view;
	string voice;
public:
	Wolf() : view("����� ����"), voice("�-�-�") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Bear :public Predatory { // �������
	string view;
	string voice;
public:
	Bear() : view("����������� ����� �������"), voice("�-�-�") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Tiger :public Predatory { // ����
	string view;
	string voice;
public:
	Tiger() : view("�������� ����"), voice("�-�-�") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Leo :public Predatory { // ���
	string view;
	string voice;
public:
	Leo() : view("���������� ���"), voice("�-�-�") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Crocodile :public Predatory { // ��������
	string view;
	string voice;
public:
	Crocodile() : view("���������� ��������"), voice("�-�-�") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Fox :public Predatory { // ����
	string view;
	string voice;
public:
	Fox() : view("��������� ������"), voice("���-���-���") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Herbivores :public Animal {
	string class_;
public:
	Herbivores() :class_("����������") {};
	string getClass() { return class_; }
};

class Giraffe :public Herbivores { // �����
	string view;
	string voice;
public:
	Giraffe() : view("����������� �����"), voice("�-�-�") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Ostrich :public Herbivores { // ������
	string view;
	string voice;
public:
	Ostrich() : view("����������� ������"), voice("�-�-�") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Peacock :public Herbivores { // ������
	string view;
	string voice;
public:
	Peacock() : view("��������� ������"), voice("�-�-�") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};

class Elephant :public Herbivores { // ����
	string view;
	string voice;
public:
	Elephant() : view("����������� ����"), voice("��-��-��") {};
	string getVoice() { return voice; }
	string getView() { return view; }
};