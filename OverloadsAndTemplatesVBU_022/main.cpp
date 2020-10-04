#include<iostream>
using namespace std;

#define tab "\t"

template<typename T>
void FillRand(T arr[], const int n);

template<typename T>
void Print(T arr[], const int n);


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

template<typename T>
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000/(double)100;
	}
}

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}