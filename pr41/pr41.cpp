

#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;
double* func1(int a)
{
	return new double[a];
}
void func2(int a, double *b)
{
	for (int i = 0; i < a; i++)
		b[i] = rand() % 20;
}
void func3(int a, double *b)
{
	for (int i = 0; i < a; i++)
		cout << b[i] << " ";
	cout << endl;
}
void func4(double *b)
{
	delete[] b;
}

int main()
{
start:
	srand(time(0));
	int size, ind;
	double *massiv;
	cout << "Vvedite razmer massiva" << endl;
	cin >> size;
	massiv = func1(size);
	func2(size, massiv);
	func3(size, massiv);
	func4(massiv);
	cout << "stop or contunie? (0/1)" << endl;
	cin >> ind;
	if (ind == 1)
		goto start;
	else
		return 0;
}