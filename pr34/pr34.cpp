
#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class vektor {
	int x;
	int y;
	int z;
	double dlin;
public:
	void set_x(int stx)
	{
		x = stx;
	}
	int get_x()
	{
		return x;
	}
	void set_y(int sty)
	{
		y = sty;
	}
	int get_y()
	{
		return y;
	}
	void set_z(int stz)
	{
		z = stz;
	}
	int get_z()
	{
		return z;
	}
	void count_dlin(int x, int y, int z)
	{
		dlin = sqrt(x*x + y * y + z * z);
	}
	double get_dlin()
	{
		return dlin;
	}
};

int main()
{
	vektor vektor1;
	int x, y, z;
	cout << "Vvedite x" << endl;
	cin >> x;
	cout << "Vvedite y" << endl;
	cin >> y;
	cout << "Vvedite z" << endl;
	cin >> z;

	vektor1.set_x(x);
	vektor1.set_y(y);
	vektor1.set_z(z);
	vektor1.count_dlin(x, y, z);
	cout << vektor1.get_x() << endl;
	cout << vektor1.get_y() << endl;
	cout << vektor1.get_z() << endl;
	cout << vektor1.get_dlin() << endl;

	system("pause");
	return 0;
}
