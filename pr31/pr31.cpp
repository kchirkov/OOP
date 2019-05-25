
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class kniga {

	string janr;
	string avtor;
	string nazvanie;
	int god_izdania;
	int cena;

public:

	void set()
	{
		cout << "Vvedite janr:";
		cin >> janr;
		cout << "Vvedite avtora:";
		cin >> avtor;
		cout << "Vvedite nazvanie:";
		cin >> nazvanie;
		cout << "Vvedite god vipyska:";
		cin >> god_izdania;
		cout << "Vvedite ceny:";
		cin >> cena;
	}
	void show()
	{
		cout << "Janr:" << janr << endl;
		cout << "Avtor:" << avtor << endl;
		cout << "Nazvanie:" << nazvanie << endl;
		cout << "God vipuska:" << god_izdania << endl;
		cout << "Price:" << cena << endl;
	}


};


int main()
{
	kniga n1;

	n1.set();
	n1.show();


	system("pause");
	return 0;
}
