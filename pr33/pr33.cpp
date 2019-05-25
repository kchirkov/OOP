
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class autom {
	string brand;
	int price;
	string color;
	string name;
	string tip;
public:
	void set_name(string stname)
	{
		name = stname;
	}
	string get_name()
	{
		return name;
	}
	void set_brand(string stbrand)
	{
		brand = stbrand;
	}
	string get_brand()
	{
		return brand;
	}
	void set_price(int stprice)
	{
		price = stprice;
	}
	int get_price()
	{
		return price;
	}
	void set_color(string stcolor)
	{
		color = stcolor;
	}
	string get_color()
	{
		return color;
	}
	void set_tip(string sttip)
	{
		tip = sttip;
	}
	string get_tip()
	{
		return tip;
	}

};

int main()
{
	autom auto1;
	int price;
	string brand, color, name, tip;
	cout << "Vvedite marku auto: " << endl;
	getline(cin, brand);
	cout << "Vvedite nazvanie auto: " << endl;
	getline(cin, name);
	cout << "Vvedite tsvet " << endl;
	getline(cin, color);
	cout << "Vvedite price: " << endl;
	cin >> price;
	cin.ignore();
	cout << "Vvedite tip auto: " << endl;
	getline(cin, tip);

	auto1.set_name(name);
	auto1.set_price(price);
	auto1.set_color(color);
	auto1.set_brand(brand);
	auto1.set_tip(tip);
	cout << auto1.get_brand() << endl;
	cout << auto1.get_name() << endl;
	cout << auto1.get_tip() << endl;
	cout << auto1.get_color() << endl;
	cout << auto1.get_price() << endl;

	system("pause");
	return 0;
}