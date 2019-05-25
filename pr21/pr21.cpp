
#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, n, m;
	a = 4.8;
	b = -7.9;
	if (a >= b)
		n = pow((a - b), (1 / 3.0));
	else
		n = a * a + (a - b) / sin(a*b);
	if (n < b)
		m = (n + a) / (-b) + sqrt(sin(a)*sin(a) - cos(n));
	if (n == b)
		m = b * b + tan(n*a);
	if (n > b)
		m = pow(b, 3) + n * a*a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "n = " << n << endl;
	cout << "m = " << m << endl;
	system("pause");
	return 0;
}
