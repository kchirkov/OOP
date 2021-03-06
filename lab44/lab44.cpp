#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Vector {
	double x;
	double y;
	double z;
public:
	Vector(double sx, double sy, double sz): x(sx), y(sy), z(sz) {}
	Vector(const Vector& v) {
		x = v.x;
		y = v.y;
		z = v.z;
	}

	void setvector(double sx, double sy, double sz) { x = sx; y = sy; z = sz; }

	double getmodule() { return sqrt(x * x + y * y + z * z); }

	Vector operator= (const Vector& v) { return Vector(v.x, v.y, v.z); }
	friend Vector operator+ (const Vector& v1, const Vector& v2) {
		return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
	}
	friend Vector operator- (const Vector& v1, const Vector& v2) {
		return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
	}
	void display()
	{
		cout << "Coordinates: (" << x << ", " << y << ", " << z << ")" << endl;
		cout << "Module: " << getmodule() << endl;
	}
	~Vector() {}
};

int main()
{
	double x, y, z;
	cout << "Set coordinates of the vector:" << endl << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "z = ";
	cin >> z;
	Vector v1(x, y, z);
	Vector v2 = v1 + v1;
	Vector v3(v2);
	v1.display();
	v2.display();
	v3.display();

	system("pause");
	return 0;
}
