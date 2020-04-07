#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;
const int row = 5;
const int col = 5;
const int col1 = 10;
int randArray(int matrix[][5])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = 1 + rand() % 20;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return matrix[row][col];
}
int randArray1(int matrix[][10])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			matrix[i][j] = 1 + rand() % 20;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return matrix[row][col1];
}

int main()
{
	srand(time(0));

	/*int matrix[row][col];
	int number = 0;

	
	for (int i = 0; i < row; i++)	
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0 && j == 0)
			{
				cout << "Enter first element of matrix: ";
				cin >> number;
				matrix[i][j] = number;
			}
			else
			{
				matrix[i][j] = matrix[i][j - 1] * 2;
			}
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	number = 0;
	int matrix2[row][col];
	

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0 && j == 0)
			{
				cout << "Enter first element of matrix: ";
				cin >> number;
				matrix2[i][j] = number;
			}
			else
			{
				matrix2[i][j] = matrix2[i][j - 1] + 1;
			}
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}*/

	/*int matrix1[row][col];
	int sum = 0;
	int arythmeticMean = 0;
	int min = 0;
	int max = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter element: ";
			cin >> matrix1[i][j];
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0 && j == 0)
			{
				min = matrix1[i][j];
				max = matrix1[i][j];
			}
			else
			{
				if (min > matrix1[i][j])
				{
					min = matrix1[i][j];
				}
				if (max < matrix1[i][j])
				{
					max = matrix1[i][j];
				}
			}
			sum += matrix1[i][j];
		}
	}
	cout << "Suma = " << sum << endl;
	arythmeticMean = sum / (row*col);
	cout << "Arythmetic mean = " << arythmeticMean << endl;
	cout << "Max = " << max << endl;
	cout << "Min = " << min << endl;*/


	/*int matrix2[row][col];
	string choise;
	int choiseNumber;
	int sumrow1 = 0;
	int sumrow2 = 0;
	int sumrow3 = 0;
	int sumrow4 = 0;
	int sumrow5 = 0;
	int sumcol1 = 0;
	int sumcol2 = 0;
	int sumcol3 = 0;
	int sumcol4 = 0;
	int sumcol5 = 0;
	int totalSum = 0;

	matrix2[row][col] = randArray(matrix2);
	cout << endl;
	cout << endl;
	cout << endl;

	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0)
			{
				sumrow1 += matrix2[i][j];
			}
			else if (i == 1)
			{
				sumrow2 += matrix2[i][j];
			}
			else if (i == 2)
			{
				sumrow3 += matrix2[i][j];
			}
			else if (i == 3)
			{
				sumrow4 += matrix2[i][j];
			}
			else if (i == 4)
			{
				sumrow5 += matrix2[i][j];
			}
			if (j == 0)
			{
				sumcol1 += matrix2[i][j];
			}
			else if (j == 1)
			{
				sumcol2 += matrix2[i][j];
			}
			else if (j == 2)
			{
				sumcol3 += matrix2[i][j];
			}
			else if (j == 3)
			{
				sumcol4 += matrix2[i][j];
			}
			else if (j == 4)
			{
				sumcol5 += matrix2[i][j];
			}
			totalSum += matrix2[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix2[i][j] << " ";
			if (i == 0 && j == col - 1)
			{
				cout << "\t\|" << sumrow1;
			}
			else if (i == 1 && j == col - 1)
			{
				cout << "\t\|" << sumrow2;
			}
			else if (i == 2 && j == col - 1)
			{
				cout << "\t\|" << sumrow3;
			}
			else if (i == 3 && j == col - 1)
			{
				cout << "\t\|" << sumrow4;
			}
			else if (i == 4 && j == col - 1)
			{
				cout << "\t\|" << sumrow5;
			}
		}
		cout << endl;
	}
	cout << "- - - - - - - - - -" << endl;
	cout << sumcol1 << " ";
	cout << sumcol2 << " ";
	cout << sumcol3 << " ";
	cout << sumcol4 << " ";
	cout << sumcol5 << " ";
	cout << "\| " << totalSum << endl;*/

	int matrix3[row][col1];
	int matrix4[row][col];
	int cols = 0;

	cout << endl;
	cout << endl;
	matrix3[row][col1] = randArray1(matrix3);
	for (int i = 0; i < row; i++)
	{
		cols = 0;
		for (int j = 0; j < col; j++)
		{
			matrix4[i][j] = matrix3[i][cols] + matrix3[i][cols + 1];
			cols+=2;
			cout << matrix4[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

