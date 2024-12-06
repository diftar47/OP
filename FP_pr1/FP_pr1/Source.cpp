#include <iostream>
#include <cmath>
#define PI 3.1415

using namespace std;

int main()
{
	double t, a, A, B, C, tau;
	cout << "Input t = ";
	cin >> t;
	cout << "Input a = ";
	cin >> a;

	if (t < PI)
	{
		A = 3 * t * t * cos(t) * cos(t) - a * sin(t);
		tau = a * t - cbrt(t * t + log(fabs(A)));
	}
	else
	{
		if (t == PI)
		{
			B = log10(a * t - cos(t));
			tau = exp(a * t) - sqrt(B);
		}
		else
		{
			C = tan(4 + t * t * t - 3 * a * a);
			tau = a * t * t - C * C;
		}
	}
	cout << "tau: " << tau; 
}