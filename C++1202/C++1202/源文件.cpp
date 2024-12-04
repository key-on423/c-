#include <iostream>
using namespace std;


class shape
{
public:
	virtual float are() const { return 0.0; }
	virtual float tiji() const { return 0.0; }
	virtual void shapename() const = 0;
};

class point
{
public:
	point(float a=0, float b=0)
	{
		x = a;
		y = b;

	}
	float getx() const;
	float gety() const;
	void setpoint(float, float);
	virtual void shapename()
	{
		cout << "此类型为点" << endl;
	}
	friend ostream& operator <<(ostream&, point&);
protected:
	float x;
	float y;
};
ostream& operator <<(ostream& output, point& t1)
{
	cout << '[' << t1.x << ',' << t1.y << ']' << endl;
	return output;
}
void point::setpoint(float a, float b)
{
	x = a;
	y = b;
}
float point::getx () const
{
	return x;
}
float point::gety() const
{
	return y;
}
class ruan :public point
{
public:
	ruan(float a, float b, float r) :point(a, b)
	{
		round = r;
	}
	float getround ()
	{
		return round;
	}
	void setround(float r)
	{
		round = r;
	}
	virtual float are() const;
	virtual void shapename() {
		cout << "此类型为圆:" << endl;
	}
	friend ostream& operator <<(ostream&, ruan&);
protected:
	float round;
};

float ruan::are()const {
	return 3.14 * round * round;
}
ostream& operator <<(ostream& output, ruan& t1)
{
	cout << '[' << t1.x << ',' << t1.y << ']' << " 半径=" << t1.round;
	return output;
}


int main()
{
	point di(3, 4);
	di.shapename();
	cout << di;
	ruan er(6, 7, 5);
	er.shapename();
	cout << er;
	cout << "面积为:" << er.are();
}

