#include "stdafx.h"
#include <iostream>
using namespace std;

void Matrix(int **matrix, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void Percent(int **matrix, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		cout << matrix[i][0] << " / " << matrix[i][1] << " = " << (floor)((double)(matrix[i][0]) / matrix[i][1] * 100) << "%" << endl;
	}
}

int main()
{
	int size;
	cin >> size;

	while (size < 5 || size > 105)
	{
		cin >> size;
	}

	int **matrix = new int*[size];

	for (int i = 0; i < size; i++)
		matrix[i] = new int[size];

	Matrix(matrix, size);
	Percent(matrix, size);

	for (int i = 0; i < size; i++)
		delete matrix[i];

	delete matrix;
	cout << endl;
	return 0;
}