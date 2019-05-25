
#include "pch.h"
#include <iostream>
using namespace std;

class kniga {

	char janr[20];
	char avtor[30];
	char nazvanie[40];
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
		cout << "GOd vipyska:" << god_izdania << endl;
		cout << "Cena:" << cena << endl;
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