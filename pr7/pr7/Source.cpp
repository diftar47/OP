#include <iostream>
#include <cmath>
using namespace std;

double func(double a, double b)
{
	return ((a * a) - (b * b)) / (sin(a));
}

int main()
{
	double x;
	double y;
	double a;

	cout << "Input x = ";
	cin >> x;
	cout << "Input y = ";
	cin >> y;
	cout << "Input a = ";
	cin >> a;

	cout << "z =" << (exp(func(x, a)) * sqrt(func(y, a))) / func(y, a);

	return 0;
}