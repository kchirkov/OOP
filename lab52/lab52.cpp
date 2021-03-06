#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Vector {
	double x;
	double y;
	double z;
public:
	Vector() : x(0), y(0), z(0) {}

	Vector(double sx, double sy, double sz) : x(sx), y(sy), z(sz) {};

	Vector operator= (const Vector& v) {
		return Vector(v.x, v.y, v.z);
	}

	friend Vector operator+ (const Vector& v1, const Vector& v2) {
		return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
	}

	friend Vector operator- (const Vector& v1, const Vector& v2) {
		return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
	}

	friend const bool operator== (const Vector& v1, const Vector& v2) {
		return (v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z);
	}

	friend const istream& operator>> (istream& in, Vector& v) {
		in >> v.x >> v.y >> v.z;
		return in;
	}

	friend const ostream& operator<< (ostream& out, const Vector& v) {
		out << v.x << " " << v.y << " " << v.z;
		return out;
	}
};

int main() {
	Vector v1;
	cout << "Set coordinates: ";
	cin >> v1;
	Vector v2 = v1;

	if (v1 == v2) {
		cout << v1 + v2;
	}
	cout << endl;

	system("pause");
	return 0;
}
