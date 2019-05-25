// lab12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

struct Complex {
	double re, im;
	void init(double r, double i) {
		re = r;
		im = i;
	}
	double mod()
	{
		return sqrt(re*re + im * im);
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	double x;
	double y;
	ifstream amountfile("amount.txt");
	amountfile >> n;
	cout << n << endl;
	amountfile.close();
	Complex *p = new Complex[n];
	for (int i = 0; i<n;i++)
	{
		cout << "Введите re и im для " << i + 1 << " числа:" << endl;
		cin >> x >> y;
		p[i].init(x, y);
	}
	for (int i = 0; i < n; i++)
	{
		cout << "p[" << i + 1 << "] = " << p[i].re << " + " << p[i].im << "*i" << endl;
	}
	int mindex = 0;
	for (int i = 1; i < n; i++)
	{
		if (p[i].mod() > p[mindex].mod())
			mindex = i;
	}
	cout << "Индекс числа с максимальным модулем: " << mindex+1 << endl;
	delete[] p;
	system("pause");
	return 0;
}


