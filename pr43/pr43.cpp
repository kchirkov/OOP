

#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;
void func1(int a, int b, int **c)
{
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			c[i][j] = rand() % 40 + 10;
}
void func2(int a, int b, int **c)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	srand(time(0));
	int c1, c2;
	cout << "vvedite kolichesvo strok" << endl;
	cin >> c1;
	cout << "vvedite kolichesvo stolbcov" << endl;
	cin >> c2;
	int **a = new int*[c1];
	for (int i = 0; i < c1; i++)
		a[i] = new int[c2];
	func1(c1, c2, a);
	func2(c1, c2, a);

	for (int i = 0; i < c1; i++)
		delete[] a[i];
	delete[] a;
	system("pause");
	return 0;
}