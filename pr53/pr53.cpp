
#include "pch.h"
#include <iostream>

using namespace std;


void insertSort(int *mass, int n)
{
	for (int i = 1; i < n; i++)
		for (int j = i; j > 0 && mass[j - 1] > mass[j]; j--)
			swap(mass[j - 1], mass[j]);
}


void insertSort(double *mass, int n)
{
	for (int i = 1; i < n; i++)
		for (int j = i; j > 0 && mass[j - 1] > mass[j]; j--)
			swap(mass[j - 1], mass[j]);
}




int main()
{

	int n;
	cout << "Count of elements: ";
	cin >> n;


	double* mass;
	mass = new double[n];
	for (int i = 0; i < n; ++i)
	{
		cout << i + 1 << " element ";
		cin >> mass[i];
	}


	cout << "Array: ";
	for (int i = 0; i < n; ++i)
	{
		cout << mass[i] << " ";
	}
	cout << endl;

	insertSort(mass, n);
	cout << "Sorted array: ";
	for (int i = 0; i < n; ++i)
	{
		cout << mass[i] << " ";
	}
	cout << endl;

	delete[] mass;
	system("pause");
	return 0;
}
