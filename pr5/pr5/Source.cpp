#include <iostream>
using namespace std;

void fillmas(int** array, int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            array[i][j] = rand() % 100;
        }
    }
}

void showmas(int** array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

double findaverage(int** array, int size)
{
    double average = 0;

    for (int i = 0; i < size; i++) {
        average += array[i][i];
    }

    return average / size;
}

int main() {
    int i, j, n;
    
    cout << "Input n = ";
    cin >> n;

    int** A = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        A[i] = new int[n];
    }

    fillmas(A, n);
    showmas(A, n);
    double average = findaverage(A, n);
    cout << "Average of main diagonal: " << average << endl;

    return 0;
}
