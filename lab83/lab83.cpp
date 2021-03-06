#include "pch.h"
#include <iostream>
#include <string>
#include <queue>
using namespace std;

class automobile {
	string model;
	string number;
public:
	automobile(string model, string number) : model(model), number(number) {};

	void display() {
		cout << "Model of car: " << model << endl << "Number: " << number << endl;
	}
};

int main() {
	queue<automobile> a;
	int n;

	cout << "Enter number of cars: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string model, number;
		cout << "Auto " << i + 1 << endl;
		cout << "Enter model of car: ";
		cin >> model;
		cout << "Enter number: ";
		cin >> number;
		a.push(automobile(model, number));
	}

	cout << "Queue" << endl;
	for (int i = 1; !a.empty(); i++) {
		cout << i<<" car in the queue: "<<endl;
		a.front().display();	
		a.pop();	
	}

	system("pause");
	return 0;
}
