#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

//LNK (Linker - компоновщик)
//Unresolved external - 

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	/*for (int i = 0; i < n; i++)
	{
		cout << arr + i << tab;
	}*/

	const int m = 10;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		/*arr[i] = rand() % 10000;
		arr[i] /= 100;*/
		arr[i] = rand() % 10000 / (double)100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}