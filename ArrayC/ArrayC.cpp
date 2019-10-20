#include "pch.h"
#include <iostream>

using namespace std;

void ssort(int** arr, int n);
void swap(int *a, int *b);
void show(int **arr, int n);


int main()
{
	const int size = 5;
	int arrUnsorted[size] = { 5,4,1,2,3 };
	int *arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = &arrUnsorted[i];
	}

	show(arr, size);

	ssort(arr, size);

	show(arr, size);

	system("pause");
}

void ssort(int **arr, int n)
{
	int* c;
	int* b;
	bool flag = true;

	do
	{
		flag = false;
		for (int i = 0; i < n - 1; i++)
		{
			if (*arr[i] > *(arr[i + 1]))
			{
				flag = true;
				swap(arr[i], arr[i + 1]);
			}
		}
	} while (flag);

	cout << endl;
}

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void show(int **arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *arr[i] << " ";
	}

	cout << endl;
}