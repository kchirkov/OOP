#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Student {	
	string name;
	string surname;
	int age;
public:
	Student(string sname, string ssurname, int sage) : name(sname), surname(ssurname), age(sage) {};

	string getname() { return name; }

	string getsurname() { return surname; }

	int getage() { return age; }
};

class Starosta : public Student {	
	string phone;
	string vkpage;
public:
	Starosta(string sname, string ssurname, int sage, string sphone, string svkpage) :
		Student(sname, ssurname, sage), phone(sphone), vkpage(svkpage) {};

	string getvkpage() { return vkpage; }

	string getphone() { return phone; }
};

int main() {

	string name, surname, phone, vkpage;
	int age;

	cout << "name: ";
	cin >> name;
	cout << "surname: ";
	cin >> surname;
	cout << "age: ";
	cin >> age;
	cout << "phone: ";
	cin >> phone;
	cout << "vkpage: ";
	cin >> vkpage;

	Starosta st(name, surname, age, phone, vkpage);

	cout << endl << "Starosta info:" << endl;
	cout << "Name: " << st.getname() << endl;
	cout << "Surname: " << st.getsurname() << endl;
	cout << "Age: " << st.getage() << endl;
	cout << "Phone: " << st.getphone() << endl;
	cout << "Vkpage: " << st.getvkpage() << endl;

	system("pause");
	return 0;
}