#include <iostream>
#include "Class_Templ.h"
using namespace std;

class Point
{
	int x = 0;
	int y = 0;
public:
	Point() = default;
	Point(int a, int b): x(a), y(b){}
	Point operator+(const Point& b)
	{
		return Point(x + b.x, y + b.y);
	}
	int GetX() const { return x; }
	int GetY() const { return y; }
};

ostream& operator<< (ostream& os, const Point& obj)
{
	os << obj.GetX() << ":" << obj.GetY();

	return os;
}

template<class T>
void Sum(T a, T b)
{
	cout << a << " + " << b << " = " << a + b << endl;
}

int main()
{
	srand(time(0));
	Sum(2, 3);
	Sum(2.5, 6.7);
}
