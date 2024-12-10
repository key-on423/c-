#include<iostream>
using namespace std;
class Cdate
{

public:
	void set(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	void display()
	{
		std::cout << "¡°" << month << "ÔÂ/" << day << "ÈÕ/" << year << "Äê¡±" << endl;
	}
	int add( )
	{
		
		return day++;
		
	}

private:
	int day;
	int month;
	int year;

};
int main()
{
	Cdate jin, min;
	jin.set(6, 6, 2016);
	jin.display();
	jin.add();
	min = jin;
	min.display();
	return 0;
}
