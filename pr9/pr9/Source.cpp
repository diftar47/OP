#include <iostream>
using namespace std;

void startProgram(); //displays information about the program and starts a function when the program is selected
void gcd_evclid(int, int); //finds GCD of two integers by Euclid method
void printIntDigits(int); //prints the digits of a number
int findMin(int *, int, int currentMin = INT_MAX); //finds minimal element of array

int main()
{
	startProgram();
	return 0;
}

void gcd_evclid(int a, int b)
{
	if (a != 0 && b != 0)
	{
		if (a > b)
		{
			a = a % b;
			gcd_evclid(a, b);
		}
		else
		{
			b = b % a;
			gcd_evclid(a, b);
		}
	}
	else
	{
		cout << a + b;
	}
}

void printIntDigits(int n)
{
	if (n == 0) 
	{
		return;
	}

	printIntDigits(n / 10);

	cout << n % 10 << " ";
}

int findMin(int *arr, int size, int currentMin) 
{
	if (size == 0) {
		return currentMin;
	}

	if (arr[size - 1] < currentMin) {
		currentMin = arr[size - 1];
	}

	return findMin(arr, size - 1, currentMin);
}

void startProgram()
{
	int a = 0;
	cout << "Select the program:" << endl
		<< "1. calcute GCD of number" << endl
		<< "2. print digits of number" << endl
		<< "3. find minimal element of array" << endl;
	cin >> a;
	if (a == 1)
	{
		int a, b;
		cout << "Enter nubmbers:" << endl << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "result: ";
		gcd_evclid(a, b);
	}
	else if (a == 2)
	{
		int n;
		cout << "Enter integer number: ";
		cin >> n;
		printIntDigits(n);
	}
	else if (a == 3)
	{
		int n;
		cout << "Enter size of array: ";
		cin >> n;

		if (n <= 0) 
		{
			cout << "Size of array must be greater than zero" << endl;
		}

		int *arr = new int[n];
		cout << "Enter the array elements:" << endl;
		for (int i = 0; i < n; i++) 
		{
			cin >> arr[i];
		}

		int minElement = findMin(arr, n);
		cout << "Minimal element of array: " << minElement << endl;
	}
	else
	{
		cout << "Program not found" << endl << endl;
	}
}