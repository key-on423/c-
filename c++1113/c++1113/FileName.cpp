#include <iostream>
using namespace std;


class Date;
class Time
{
public:
	Time(int h, int s, int m)
	{
		hour = h;
		second = s;
		minute = m;
	}
	void display(Date&);
	
private:
	int hour;
	int second;
	int minute;
};
class Date
{
public:
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	friend void Time::display(Date &);
private:
	int year;
	int month;
	int day;
};
void Time::display(Date&d1)
{
	cout << d1.year << "Äê" << d1.month << "ÔÂ" << d1.day << "ÈÕ" << endl;
	cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{
	Date h1(2013, 5, 20);
	Time h2(20, 14, 13);
	h2.display(h1);
	return 0;
}