
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:
	string brand;
	double w;
	double h;
	double price;

	void getData() {
		cout << "Brand: " << brand << endl;
		cout << "Width: " << w << endl;
		cout << "Height: " << h << endl;
		cout << "Price: " << price << endl;
	}	
};

int main() {

	Tiles t1;
	cout << "Enter brand of the first tiles: ";
	cin >> t1.brand;
	cout << "Enter width of the first tiles: ";
	cin >> t1.w;
	cout << "Enter height of the first tiles: ";
	cin >> t1.h;
	cout << "Enter price of the first tiles: ";
	cin >> t1.price;

	Tiles t2;
	cout << "Enter brand of the second tiles: ";
	cin >> t2.brand;
	cout << "Enter width of the second tiles: ";
	cin >> t2.w;
	cout << "Enter height of the second tiles: ";
	cin >> t2.h;
	cout << "Enter price of the second tiles: ";
	cin >> t2.price;

	cout << "The first tiles" << endl;
	t1.getData();
	cout << endl << "The second tiles" << endl;
	t2.getData();

	system("pause");
	return 0;
}