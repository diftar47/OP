#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int i, n;
	int product_positive = 1;
	int sumNegative = 0;
	int countNegative = 0;
	bool presence_positive = false;
	double averageNegative = 0;

	cout << "Input n = ";
	cin >> n;
	double* a = new double[n];

	for (i = 0; i <= n; i++)
	{
		cout << "Input a(" << i << ") = ";
		cin >> a[i];
	}

	for (i = 0; i <= n; i++)
	{
		if (a[i] > 0)
		{
			presence_positive = true;
			product_positive *= a[i];
		}
		if (a[i] < 0)
		{
			sumNegative += a[i];
			countNegative++;
		}
	}

	if (presence_positive == false)
	{
		product_positive = 0;
	}

	if (countNegative != 0)
	{
		averageNegative = sumNegative / countNegative;
		cout << "average arefmetic of negative = " << averageNegative << endl;
	}
	else
	{
		cout << "average arefmetic of negative = 0" << endl;
	}
	
	cout << "product of positive = " << product_positive;
}
