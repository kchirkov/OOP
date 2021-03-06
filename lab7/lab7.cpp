
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Human {
protected:
	string name;
	string surname;
	int age;
public: 
	Human(): name(""), surname(""), age(0) {}
	Human(string name, string surname, int age) : name(name), surname(surname), age(age) {}
	virtual void print() = 0;
	~Human() {}
};

class Student: public Human {
	bool on_lesson;
public:
	Student() : Human(), on_lesson(false) {}
	Student(string name, string surname, int age, bool on_lesson) : Human(name, surname, age), on_lesson(on_lesson) {}
	void print() {
		cout << "Name of student: " << name << surname << endl << "Age of student: " << age << endl << "On lesson or not: " << on_lesson << endl;
	}
	~Student() {}
};

class Boss : public Human{
	int number_of_workers;
public:
	Boss() : Human(), number_of_workers(0) {}
	Boss(string name, string surname, int age, int number_of_workers) : Human(name, surname, age), number_of_workers(number_of_workers) {}
	void print() {
		cout << "Name of boss: " << name << surname << endl << "Age of boss: " << age << endl << "Number of workers of boss: " << number_of_workers << endl;
	}
	~Boss() {}
};

int main()
{
    string name,surname; 
	int age, nof;
	bool onlesson;
	cout << "Enter Name of Student: " << endl;
	cin >> name;
	cout << "Enter Surname of Student: " << endl;
	cin >> surname;
	cout << "Enter Age of Student: " << endl;
	cin >> age;
	cout << "is student on lesson or not?(1/0)" << endl;
	cin >> onlesson;
	Student s(name, surname, age, onlesson);

	cout << "Enter Name of Boss: " << endl;
	cin >> name;
	cout << "Enter Surname of Boss: " << endl;
	cin >> surname;
	cout << "Enter Age of Boss: " << endl;
	cin >> age;
	cout << "Enter number of workers: " << endl;
	cin >> nof;
	Boss b(name, surname, age, nof);
	
	s.print();
	b.print();
	system("pause");
	return 0;
}


