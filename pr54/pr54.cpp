#include "pch.h"
#include <iostream>

using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int raz(int a, int b)
{
	return a - b;
}

double sum(double a, double b)
{
	return a + b;
}

double raz(double a, double b)
{
	return a - b;
}

int main()
{

	int s1 = sum(1, 2);
	int r1 = raz(2, 1);
	double s2 = sum(1.1, 2.2);
	double r2 = raz(2.2, 1.1);
	cout <<"sum and raz int chisel"<<endl<< s1 << endl << r1 << endl<<"sum and raz double chisel "<<endl << s2 << endl << r2 << endl;
	return 0;
}
