#pragma once

class Date
{
	int day;
	int month;
	int year;
public:
	Date();
	Date(int a,int b,int c);

	int getDay();
	int getMonth();
	int getYear();

	void setDay(int a);
	void setMonth(int a);
	void setYear(int a);

	void Print();

	Date& operator++();
	Date& operator--();
	Date operator++(int a);
	Date operator--(int a);

	Date operator +(int a);
	Date operator -(int a);

	Date operator -(Date a);
	Date operator +(Date a);

	Date& operator +=(int a);
	Date& operator -=(int a);

	bool operator>(Date& a);
	bool operator<(Date& a);
	bool operator>=(Date& a);
	bool operator<=(Date& a);
	bool operator==(Date& a);
	bool operator!=(Date& a);

	void isValid(Date a);
};