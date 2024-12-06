#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i, j, n;
    double A[20][20];
    cout << "Input n (max 20) = ";
    cin >> n;

    if (n > 20) {
        cout << "Error: n should be <= 20" << endl;
        return 1;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << "Input A(" << i << ", " << j << ")= ";
            cin >> A[i][j];
        }
    }

    double sum = 0;

    for (i = 0; i < n; i++) {
        sum += A[i][i];
    }

    double average = sum / n;
    cout << "Average of main diagonal: " << average << endl;

    return 0;
}
