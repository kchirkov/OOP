#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double a, b, s, r, u, d;
	cout << "Vvedite 2 chisla v poryadke ubivaniya" << endl;
	cin >> a >> b;
	s = a + b;
	r = a - b;
	u = a * b;
	if (b != 0)
		d = a / b;
	cout << "Summa = " << s << endl;
	cout << "Raznost = " << r << endl;
	cout << "Umnozhenie = " << u << endl;
	cout << "Delenie = " << d << endl;
	
	system("pause");
	return 0;
}


