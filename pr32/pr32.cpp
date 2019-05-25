
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class groupofStudents {
	string name;
	int kurs;
	string napr;
	int numberof;
	string starosta;
public:
	void set_name(string stname)
	{
		name = stname;
	}
	string get_name()
	{
		return name;
	}
	void set_starosta(string ststarosta)
	{
		starosta = ststarosta;
	}
	string get_starosta()
	{
		return starosta;
	}
	void set_numberof(int stnumberof)
	{
		numberof = stnumberof;
	}
	int get_numberof()
	{
		return numberof;
	}
	void set_napr(string stnapr)
	{
		napr = stnapr;
	}
	string get_napr()
	{
		return napr;
	}
	void set_kurs(int stkurs)
	{
		kurs = stkurs;
	}
	int get_kurs()
	{
		return kurs;
	}

};

int main()
{
	groupofStudents gruppa;
	int kurs, numberof;
	string napr, starosta, name;
	cout << "Vvedite nazvanie gruppi: " << endl;
	getline(cin, name);
	cout << "Vvedite kurs: " << endl;
	cin >> kurs;
	cin.ignore();
	cout << "Vvedite napravlenie " << endl;
	getline(cin, napr);
	cout << "Vvedite kolichestvo studentov" << endl;
	cin >> numberof;
	cin.ignore();
	cout << "Vvedite imya starosti" << endl;
	getline(cin, starosta);
	gruppa.set_name(name);
	gruppa.set_kurs(kurs);
	gruppa.set_napr(napr);
	gruppa.set_numberof(numberof);
	gruppa.set_starosta(starosta);
	cout << gruppa.get_name() << endl;
	cout << gruppa.get_kurs() << endl;
	cout << gruppa.get_napr() << endl;
	cout << gruppa.get_numberof() << endl;
	cout << gruppa.get_starosta() << endl;

	system("pause");
	return 0;
}
