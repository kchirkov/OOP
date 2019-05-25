

#include "pch.h"
#include <iostream>
#include <ctime>;

using namespace std;

int main()
{
	int *a = new int[12];
	for (int i = 0; i < 12; i++)
	{
		a[i] = rand() % 20;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 11; i++)
	{
		int c = a[i];
		a[i] = a[i + 1];
		a[i + 1] = c;
		i++;
	}
	for (int i = 0; i < 12; i++)
		cout << a[i] << " ";
	system("pause");
	return 0;
}
