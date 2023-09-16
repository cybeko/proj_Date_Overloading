using namespace std;
#include <iostream>
#include "Date.h"

int main()
{
	cout << "Init. date" << endl;
	Date a(15, 10, 2015);
	a.Print();

	cout << "\nIncr. day by 1" << endl;
	a++;
	a.Print();
	cout << "\nDecr. day by 1" << endl;
	a--;
	a.Print();

	cout << "\nAdd days" << endl;
	a = a + 20;
	a.Print();
	cout << "\nSubtr. days" << endl;
	a = a - 5;
	a.Print();

	cout << "\nSubtr. date" << endl;
	Date b(10, 5, 200);
	a = a - b;
	a.Print();
	cout << "\nAdd. date" << endl;
	Date c(50, 7, 250);
	a = a + c;
	a.Print();

	cout << "\nOperator: +=" << endl;
	a += 2;
	a.Print();
	cout << "\nOperator: -=" << endl;
	a -= 4;
	a.Print();

	cout << "\nOperator: >" << endl;
	bool rez = a > b;
	cout << rez;
	cout << "\nOperator: <" << endl;
	rez = a < b;
	cout << rez;
	cout << "\nOperator: <=" << endl;
	rez = a <= b;
	cout << rez;
	cout << "\nOperator: >=" << endl;
	rez = a >= b;
	cout << rez;
	cout << "\nOperator: ==" << endl;
	rez = a == b;
	cout << rez;
	cout << "\nOperator: !=" << endl;
	rez = a != b;
	cout << rez;
}