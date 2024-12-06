#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i, j, n;
    
    cout << "Input n = ";
    cin >> n;

    int** A = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        A[i] = new int[n];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = rand() % 1000000000000;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    double average = 0;

    for (i = 0; i < n; i++) {
        average += A[i][i];
    }

    average /= n;
    cout << "Average of main diagonal: " << average << endl;

    return 0;
}
