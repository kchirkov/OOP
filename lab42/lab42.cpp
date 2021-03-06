#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Tiles {
	string brand;
	double wght;
	double hght;
	double price;
public:
	Tiles(string sbrand, double swght, double shght, double sprice): brand(sbrand), wght(swght), hght(shght), price(sprice) {}
	Tiles(const Tiles& t) {
		brand = t.brand;
		wght = t.wght;
		hght = t.hght;
		price = t.price;
	}
	Tiles operator=(const Tiles& t)
	{
		return Tiles(t.brand, t.wght, t.hght, t.price);
	}
	void setbrand(string sbrand) {
		brand = sbrand;
	}
	void setwght(double swght) {
		wght = swght;
	}
	void sethght(double shght) {
		hght = shght;
	}
	void setprice(double sprice) {
		price = sprice;
	}
	void getData() {
		cout << "Brand: " << brand << endl;
		cout << "Width: " << wght << endl;
		cout << "Height: " << hght << endl;
		cout << "Price: " << price << endl;
	}
	~Tiles() {}
};

int main() {
	string brand;
	double wght, hght, price;
	cout << "Enter brand of the first tiles: ";
	cin >> brand;
	cout << "Enter width of the first tiles: ";
	cin >> wght;
	cout << "Enter height of the first tiles: ";
	cin >> hght;
	cout << "Enter price of the first tiles: ";
	cin >> price;
	Tiles t1(brand, wght, hght, price);

	Tiles t2=t1;

	cout << "The first tiles" << endl;
	t1.getData();
	cout << endl << "The second tiles" << endl;
	t2.getData();

	system("pause");
	return 0;
}
