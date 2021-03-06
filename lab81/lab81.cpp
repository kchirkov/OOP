
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
	string name;
	string surname;
	int age;
public:
	Student(string name, string surname, int age) : name(name), surname(surname), age(age) {};

	string getname() { 
		return name; 
	}

	string getsurname() { 
		return surname; 
	}

	int getage() { 
		return age; 
	}
};

int main() {

	vector<Student> students;
	int n;

	cout << "Enter number of students:" << endl;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string name, surname;
		int age;
		cout << "Student number " << i + 1 << endl;
		cout << "name: ";
		cin >> name;
		cout << "surname: ";
		cin >> surname;
		cout << "age: ";
		cin >> age;
		students.push_back(Student(name, surname, age));
	}

	for (int i = 0; i < n;i++) {
		cout << endl << "name: " << students[i].getname() << endl;
		cout << "surname: " << students[i].getsurname() << endl;
		cout << "age: " << students[i].getage() << endl;
	}

	system("pause");
	return 0;
}