#include"Functions.h"

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

