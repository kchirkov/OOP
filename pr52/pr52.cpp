// pr52.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;


void selectionSort(int *mass, int size)
{
	int min, temp;
	for (int i = 0; i < size - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (mass[j] < mass[min])
				min = j;
		}
		temp = mass[i];
		mass[i] = mass[min];
		mass[min] = temp;
	}
}


void selectionSort(double *mass, int size)
{
	int min;
	double temp;
	for (int i = 0; i < size - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (mass[j] < mass[min])
				min = j;
		}
		temp = mass[i];
		mass[i] = mass[min];
		mass[min] = temp;
	}
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

	selectionSort(mass, n);
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
