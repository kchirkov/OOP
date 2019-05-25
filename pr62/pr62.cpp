

#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class vir {
public:
	virtual void pechat() = 0;
	virtual double vich() = 0;
	virtual string proizvod() = 0;


};

class konst : public vir {
public:
	double x;
	konst(double ch) : x(ch) {}
	void pechat()
	{
		cout << x << endl;
	}
	double vich()
	{
		return x;
	}
	string proizvod()
	{
		return "0";
	}
};

class per : public vir {
public:
	double x;
	per(double ch) : x(ch) {}
	void pechat()
	{
		cout << x << endl;
	}
	double vich()
	{
		return x;
	}
	string proizvod()
	{
		return "1";
	}
};

class sum : public vir {
public:
	double x, y;
	sum(double ch1, double ch2) : x(ch1), y(ch2) {}
	void pechat()
	{
		cout << x << "+" << y << endl;
	}
	double vich()
	{
		return x + y;
	}
	string proizvod()
	{
		return "1+y";
	}
};

class raz : public vir {
public:
	double x, y;
	raz(double ch1, double ch2) : x(ch1), y(ch2) {}
	void pechat()
	{
		cout << x << "-" << y << endl;
	}
	double vich()
	{
		return x - y;
	}
	string proizvod()
	{
		return "1-y";
	}
};

class umn : public vir {
public:
	double x, y;
	umn(double ch1, double ch2) : x(ch1), y(ch2) {}
	void pechat()
	{
		cout << x << "*" << y << endl;
	}
	double vich()
	{
		return x * y;
	}
	string proizvod()
	{
		return "y";
	}
};

class del : public vir {
public:
	double x, y;
	del(double ch1, double ch2) : x(ch1), y(ch2) {}
	void pechat()
	{
		cout << x << "/" << y << endl;
	}
	double vich()
	{
		return x / y;
	}
	string proizvod()
	{
		return "1/y";
	}
};

class sinus : public vir {
public:
	double x;
	sinus(double ch1) : x(ch1) {}
	void pechat()
	{
		cout << "sinx" << endl;
	}
	double vich()
	{
		return sin(x);
	}
	string proizvod()
	{
		return "cosx";
	}
};

class cosinus : public vir {
public:
	double x;
	cosinus(double ch1) : x(ch1) {}
	void pechat()
	{
		cout << "cosx" << endl;
	}
	double vich()
	{
		return cos(x);
	}
	string proizvod()
	{
		return "-sinx";
	}
};

class expo : public vir {
public:
	double x;
	expo(double ch1) : x(ch1) {}
	void pechat()
	{
		cout << "e^x" << endl;
	}
	double vich()
	{
		return exp(x);
	}
	string proizvod()
	{
		return "e^x";
	}
};
class natlog : public vir {
public:
	double x;
	natlog(double ch1) : x(ch1) {}
	void pechat()
	{
		cout << "lnx" << endl;
	}
	double vich()
	{
		return log(x);
	}
	string proizvod()
	{
		return "1/x";
	}
};

int main()
{
	sum a(3, 4);
	a.pechat();
	cout << a.vich() << endl;
	cout << "proizvodnaya po x = " << a.proizvod() << endl;

	sinus b(2);
	b.pechat();
	cout << b.vich() << endl;
	cout << "proizvodnaya po x = " << b.proizvod() << endl;

	system("pause");
	return 0;
}
