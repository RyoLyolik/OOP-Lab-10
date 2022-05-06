#include "obj.h"
//Human
Human::Human(string surname_, string name_, string midname_, int age_) {
	surname = surname_;
	name = name_;
	midname = midname_;
    age = age_;
}

//student
Student::Student(string surname_, string name_, string midname_, int age_, bool on_lesson_)
{
	surname = surname_;
	name = name_;
	midname = midname_;
	age = age_;
	on_lesson = on_lesson_;
}
void Student::print() {
	cout << "������:\n";
	cout << "\t�������: " << surname << endl;
	cout << "\t���: " << name << endl;
	cout << "\t��������: " << midname << endl;
	cout << "\t�������: " << age << endl;
	string on_lesson_string;
	if (on_lesson) {
		on_lesson_string = "��";
	}
	else {
		on_lesson_string = "���";
	}
	cout << "\t�� �����: " << on_lesson_string;
}

//Boss
Boss::Boss(string surname_, string name_, string midname_, int age_, int number_of_workers_) {
	surname = surname_;
	name = name_;
	midname = midname_;
	age = age_;
	number_of_workers = number_of_workers_;
}
void Boss::print()
{
	cout << "����:\n";
	cout << "\t�������: " << surname << endl;
	cout << "\t���: " << name << endl;
	cout << "\t��������: " << midname << endl;
	cout << "\t�������: " << age << endl;
	cout << "\t���������� ����������: " << number_of_workers;
}