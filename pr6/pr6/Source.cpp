#include <iostream>
using namespace std;

struct point
{
	int x;
	int y;
};

point setPoint(); //Sets the coordinates of a point
void showPoint(point); //Shows the coordinates of a point 

int main()
{
	cout << "Input coordinates of a p1: " << endl;
	point p1 = setPoint();
	cout << "Input coordinates of a p2: " << endl;
	point p2 = setPoint();
	point p3;

	p3 = { p1.x + p2.x, p1.y + p2.y };
	cout << "coordinates of a point p1: ";
	showPoint(p1);
	cout << "coordinates of a point p2: ";
	showPoint(p2);
	cout << "coordinates of a point p3: p1 + p2 = ";
	showPoint(p3);

	return 0;
}

point setPoint()
{
	point p;
	cout << "Input x = ";
	cin >> p.x;
	cout << "Input y = ";
	cin >> p.y;
	return p;
}

void showPoint(point p)
{
	cout << "x = " << p.x << ", " << "y = " << p.y << endl;
}