#pragma once
#include <string>
#include <iostream>
using namespace std;
class Human {
protected:
	string surname, name, midname;
	int age;
public:
	Human() {};
	Human(string surname_, string name_, string midname_, int age_);
	virtual void print() {};
	~Human() {}
};

class Student :Human {
private:
	bool on_lesson;
public:
	Student() {};
	Student(string surname_, string name_, string midname_, int age_, bool on_lesson_);
	void print();
	~Student() {}
};

class Boss :Human {
private:
	int number_of_workers;
public:
	Boss() {};
	Boss(string surname_, string name_, string midname_, int age_, int number_of_workers_);
	void print();
	~Boss() {};
};