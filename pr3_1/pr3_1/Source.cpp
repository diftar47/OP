#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x_n, x_k, dx, x, a, A, B, C, eta;
    int i, n;

    cout << "Input x_n = ";
    cin >> x_n;
    cout << "Input x_k = ";
    cin >> x_k;
    cout << "Input a = ";
    cin >> a;
    cout << "Input n = ";
    cin >> n;

    x = x_n;
    i = 1;
    dx = (x_k - x_n) / (n - 1);

    while (x <= x_k) 
    {
        if (x > 1) 
        {
            A = exp(x + a);
            B = log(a * sqrt(x - 1) + pow(cos(x), 2));
            C = 2.0 / 3.0 * pow(sin(x), 3) + sqrt(a);
            eta = A + B - C;

            cout << i << ". x = " << x << " eta = " << eta << endl;
        }
        else 
        {
            cout << i << ". x = " << x << " eta not exist (x <= 1)" << endl;
        }

        i++;
        x += dx;
    }

    system("PAUSE");
    return 0;
}
