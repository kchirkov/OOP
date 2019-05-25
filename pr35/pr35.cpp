
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class biblio {
	string metro;
	int numberof;
	string adres;
	string name;
	string godosn;
public:
	void set_name(string stname)
	{
		name = stname;
	}
	string get_name()
	{
		return name;
	}
	void set_adres(string stadres)
	{
		adres = stadres;
	}
	string get_adres()
	{
		return adres;
	}
	void set_numberof(int stnumberof)
	{
		numberof = stnumberof;
	}
	int get_numberof()
	{
		return numberof;
	}
	void set_godosn(string stgodosn)
	{
		godosn = stgodosn;
	}
	string get_godosn()
	{
		return godosn;
	}
	void set_metro(string stmetro)
	{
		metro = stmetro;
	}
	string get_metro()
	{
		return metro;
	}

};

int main()
{
	biblio biblio1;
	int numberof;
	string godosn, metro, name, adres;
	cout << "Vvedite nazvanie " << endl;
	getline(cin, name);
	cout << "Vvedite adres: " << endl;
	getline(cin, adres);
	cout << "Vvedite metro: " << endl;
	getline(cin, metro);
	cout << "Vvedite kol-vo knig: " << endl;
	cin >> numberof;
	cin.ignore();
	cout << "Vvedite god osnovaniya" << endl;
	getline(cin, godosn);

	biblio1.set_name(name);
	biblio1.set_adres(adres);
	biblio1.set_metro(metro);
	biblio1.set_numberof(numberof);
	biblio1.set_godosn(godosn);
	cout << biblio1.get_name() << endl;
	cout << biblio1.get_adres() << endl;
	cout << biblio1.get_metro() << endl;
	cout << biblio1.get_numberof() << endl;
	cout << biblio1.get_godosn() << endl;

	system("pause");
	return 0;
}
