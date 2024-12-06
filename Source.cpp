#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double x_n, x_k, dx, x, a, A, B, C, eta;
	int i, n;
	cout << "Input x_n=";
	cin >> x_n;
	cout << "Input x_k=";
	cin >> x_k;
	cout << "Input a=";
	cin >> a;
	cout << "Input n=";
	cin >> n;
	x = x_n; i = 1;
	dx = (x_k - x_n) / (n - 1);
	while (x <= x_k)
	{
		if (x >= 1)
		{
			if (a > 0)
			{
				A = pow(a, sqrt(x - 1)) + cos(x) * cos(x);

			}
			else cout << "eta not exist" << endl;
		}
		else cout << "eta not exist" << endl;
		
		
		
		
		
		
		
		A = exp(x + a);
		if (A ! 0)
		{
			B = pow(a, sqrt(x - 1)) + pow(cos(x), 2);
			if (B > 0)
			{
				C = 2/3 * pow(sin(x), 3) + sqrt(a);
				if (C >= 0)
				{
					eta = A + log(B) - C;
					cout << i << ". x=" << x << " eta= " << eta << endl;
				}
				else cout << i << ". x=" << x << " eta not exist (C<0)" << endl;
			}
			else cout << i << ". x=" << x << " eta not exist (B<=0)" << endl;
		}
		else cout << i << ". x=" << x << " eta not exist (A=0)" << endl;
		i++; x += dx;
	}
	system("PAUSE");
	return 0;
}