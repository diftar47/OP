//7 варіант

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, t;

	cout << "Input t = ";
	cin >> t;

	if (t > 0 && t <= 1)
	{
		a = 3 * pow(t, 3) - sin(log10(t));
	}
	else if (t <= 0)
	{
		a = atan(t + exp(t-1));
	}
	else a = cbrtf((pow(t, 5) - cos(t * t) )/ (t + 1));
		//((A2^5)-COS(A2^2))/(A2+1))^(1/3)
	

	cout << "result = " << a << endl;
	system("PAUSE");
	return 0;
}