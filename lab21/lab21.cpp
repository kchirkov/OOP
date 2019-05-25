

#include "pch.h"
#include <iostream>
using namespace std;

double oilspending1(double speed)
{
	return speed * 0.1;
}

double oilspending2(double speed)
{
	return speed * 0.15;
}

double(*oilspending) (double speed);

int main()
{
	double speed;
	cout << "enter speed: " << endl;
	cin >> speed;
	if (speed <= 100)
	{
		oilspending = oilspending1;
	}
	else
	{
		oilspending = oilspending2;
	}
	cout << "oil spending per 100 km = " << oilspending(speed)<<endl;
}
