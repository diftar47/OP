//7 варіант

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, a, y, A, B, B1, C, C1, lambda;

	cout << "Input x = ";
	cin >> x;

	cout << "Input a = ";
	cin >> a;

	cout << "Input y = ";
	cin >> y;

	A = cos(a * x) * (1 + (1 /tan(y)));
	cout << "A = " << A << endl;

	B = a * pow(x, 3) - 3 * pow(a, 2) * x + y;
	cout << "B = " << B << endl;

	B1 = 3 - sin(x + y) - cos(x - y);
	cout << "B1 = " << B1 << endl;

	C = pow(tan(x / a), 4) + pow(tan(y / a), 2) + 1;
	cout << "C = " << C << endl;

	C1 = sqrt(fabs(3 + sin(x) - pow(cos(y), 3)));
	cout << "C1 = " << C1 << endl;

	lambda = A + log(fabs(B / B1)) + sqrt(C / C1);

	cout << "Lambda = " << lambda << endl;
	system("PAUSE");
	return 0;
}