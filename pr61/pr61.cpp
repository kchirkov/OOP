

#include "pch.h"
#include <iostream>

using namespace std;

class Property {
public:
	double worth;
	Property(double w)
	{
		worth = w;
	}
	virtual double tax() = 0;
	~Property() {}
};

class Appartment : public Property {
public:
	Appartment(double s1) : Property(s1) {}
	double tax()
	{
		return worth / 1000;
	}
};

class Car : public Property {
public:
	Car(double s2) : Property(s2) {}
	double tax()
	{
		return worth / 200;
	}
};

class CountryHouse : public Property {
public:
	CountryHouse(double s3) : Property(s3) {};
	double tax()
	{
		return worth / 500;
	}
};


int main()
{
	Property *M[7];
	M[0] = new Appartment(10000000);
	M[1] = new Appartment(20000000);
	M[2] = new Appartment(30000000);
	M[3] = new Car(1000000);
	M[4] = new Car(2000000);
	M[5] = new CountryHouse(5000000);
	M[6] = new CountryHouse(6000000);
	for (int i = 0; i < 7; i++)
	{
		cout << "Velichina naloga dlya " << i + 1 << " objecta = " << M[i]->tax() << endl;
		delete M[i];
	}
	system("pause");
	return 0;
}
