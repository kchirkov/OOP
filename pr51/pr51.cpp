
#include "pch.h"
#include <iostream>

using namespace std;


void bubblesort(int n, int *mass)
{
	for (int i = 1; i < n; ++i)
	{
		for (int r = 0; r < n - i; r++)
		{
			if (mass[r] < mass[r + 1])
			{
				int temp = mass[r];
				mass[r] = mass[r + 1];
				mass[r + 1] = temp;
			}
		}
	}
}


void bubblesort(int n, double *mass)
{
	for (int i = 1; i < n; ++i)
	{
		for (int r = 0; r < n - i; r++)
		{
			if (mass[r] < mass[r + 1])
			{
				int temp = mass[r];
				mass[r] = mass[r + 1];
				mass[r + 1] = temp;
			}
		}
	}
}




int main()
{

	int n;
	cout << "Enter count: ";
	cin >> n;


	double* mass;
	mass = new double[n];
	for (int i = 0; i < n; ++i)
	{
		cout << i + 1 << " element: ";
		cin >> mass[i];
	}


	cout << "Array: ";
	for (int i = 0; i < n; ++i)
	{
		cout << mass[i] << " ";
	}
	cout << endl;

	bubblesort(n, mass);
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
