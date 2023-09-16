#include "Date.h"
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS 
using namespace std;

Date::Date()
{
	day = NULL;
	month = NULL;
	year = NULL;
}
Date::Date(int a, int b, int c)
{
	day = a;
	month = b;
	year = c;
}
int Date::getDay()
{
	return day;
}
int Date::getMonth()
{
	return month;
}
int Date::getYear()
{
	return year;
}
void Date::setDay(int a)
{
	day = a;
}
void Date::setMonth(int a)
{
	month = a;
}
void Date::setYear(int a)
{
	year = a;
}
void Date::Print()
{
	cout << day << "." << month << "." << year << endl;
}
Date& Date::operator++()
{
	day += 1;
	return *this;
}
Date& Date::operator--()
{
	day -= 1;
	return *this;
}
Date Date::operator++(int a)
{
	Date rez(day, month, year);
	day += 1;
	return rez;
}
Date Date::operator--(int a)
{
	Date rez(day, month, year);
	day -= 1;
	return rez;
}
Date Date::operator+(int a)
{
	Date rez;
	rez.day = day + a;
	rez.month = month;
	rez.year = year;
	return rez;
}
Date Date::operator-(int a)
{
	Date rez;
	rez.day = day - a;
	rez.month = month;
	rez.year = year;
	return rez;
	//return Date(day - a, month, year);
}
Date Date::operator-(Date a)
{
	Date rez;
	rez.day = day - a.day;
	rez.month = month - a.month;
	rez.year = year - a.year;
	return rez;
}
Date Date::operator+(Date a)
{
	Date rez;
	rez.day = day + a.day;
	rez.month = month + a.month;
	rez.year = year + a.year;
	return rez;
}
Date& Date::operator+=(int a)
{
	day += a;
	return *this;
}
Date& Date::operator-=(int a)
{
	day -= a;
	return *this;
}
bool Date::operator>(Date& a)
{
	if (day > a.day && month >a.month && year >a.year)
	{
		return true;
	}
	return false;
}
bool Date::operator<(Date& a)
{
	if (day < a.day && month < a.month && year < a.year)
	{
		return true;
	}
	return false;
}
bool Date::operator>=(Date& a)
{
	if (day >= a.day && month >= a.month && year >= a.year)
	{
		return true;
	}
	return false;
}
bool Date::operator<=(Date& a)
{
	if (day <= a.day && month <= a.month && year <= a.year)
	{
		return true;
	}
	return false;
}
bool Date::operator==(Date& a)
{
	if (day == a.day && month == a.month && year == a.year)
	{
		return true;
	}
	return false;
}
bool Date::operator!=(Date& a)
{
	if (day != a.day && month != a.month && year != a.year)
	{
		return true;
	}
	return false;
}
void Date::isValid(Date a)
{
	if (day > 31)
	{
		int monthsToAdd = day / 31; 
		month += monthsToAdd;       
		day %= 31; 

		while (month > 12)
		{
			month -= 12;
			year++;
		}
	}
}
