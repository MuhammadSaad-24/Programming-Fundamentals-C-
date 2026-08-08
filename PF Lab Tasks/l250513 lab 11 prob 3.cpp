#include<iostream>
#include<iomanip>
using namespace std;
const int c = 10;
void output(int M[][c], int r, int col)
{
	cout << "---------------------\n";
	cout << "\tMatrix : \n";
	cout << "---------------------\n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}
}
void input(int M1[][c], int M2[][c], int& r1, int& r2, int& c1, int& c2)
{
	cout << "Enter Rows of Matrix 1 : ";
	cin >> r1;
	cout << "Enter Columns of Matrix 1 : ";
	cin >> c1;
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			cout << "Enter Matrix Index [" << i << "][" << j << "] : ";
			cin >> M1[i][j];
		}
	}
	output(M1, r1, c1);
	cout << "Enter Rows of Matrix 2 : ";
	cin >> r2;
	cout << "Enter Columns of Matrix 2 : ";
	cin >> c2;
	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			cout << "Enter Matrix Index [" << i << "][" << j << "] : ";
			cin >> M2[i][j];
		}
	}
	output(M2, r2, c2);
}
void diagnalprint(int M[][c], int r, int col)
{
	if (r != col)
	{
		cout << "Not a Squre Matrix : \n";
	}
	else
	{
		int i = 0, j = col - 1;
		bool flag = 1;
		while (i < r && j >= 0)
		{
			int temp = j;
			i = 0;
			flag = 1;
			while (j < col && flag)
			{
				cout << setw(3) << M[i][j];
				i++;
				j++;
				if (j == col)
					flag = 0;
			}
			cout << endl;
			j = temp - 1;
		}
		int d = r - 1, a = 1;
		for (d = r - 1; d >= 1; d--)
		{
			int temp = a;
			for (int s = 0; s < d; s++)
			{
				cout << setw(3) << M[a][s];
				a++;
			}
			a = ++temp;
			cout << endl;
		}
	}
}
void diagnalcross(int M[][c], int r, int col)
{
	if (r != col)
		cout << "Not a Squre Matrix : \n";
	else
	{
		for (int i = 0, a = 0; i < r; i++)
		{
			a = 0;
			for (int j = i; j >= 0; j--)
			{
				cout << setw(3) << M[a][j];
				a++;
			}
			cout << endl;
		}
		for (int i = 1, a = 1; i < r; i++)
		{
			a = i;
			for (int j = r - 1; j >= i; j--)
			{
				cout << setw(3) << M[a][j];
				a++;
			}
			cout << endl;
		}
	}
}
bool add(int M1[][c],int M2[][c],int M3[][c],int r1,int r2,int & r3,int c1,int c2,int &c3)
{
	if (r1 != r2 && c1 != c2) 
	{
		cout << "Addition is not Possible : \n";
		return 0;
	}
	else
	{
		r3 = r1;
		c3 = c1;
		for(int i = 0;i < r3;i++)
		{ 
			for (int j = 0; j < c3; j++)
			{
				M3[i][j] = M1[i][j] + M2[i][j];
			}
		}
		output(M3, r3, c3);
	}
	return 1;
}
bool Multiply(int M1[][c], int M2[][c], int M3[][c], int r1, int r2, int& r3, int c1, int c2, int& c3)
{
	if (r2 != c1)
	{
		cout << "Multiplication not Possible : \n";
		return 0;
	}
	else
	{
		c3 = c2;
		r3 = r1;
		M3[r3][c3] = 0;
		for (int i = 0; i < r3; i++)
		{
			for (int j = 0; j < c3; j++)
			{
				for (int k = 0; k < r3; k++)
				{
					M3[i][j] += M1[j][k] * M2[k][j];
				}
			}
		}
	}
	output(M3, r3, c3);
	return 1;
}
void sortcolumn(int M[][c], int row, int col)
{
	for (int i = 0; i < col;i++) 
	{
		bool flag = 1;
		while (flag)
		{
			flag = 0;
			for (int j = 0; j < row - 1; j++)
			{
				if (M[j + 1][i] < M[j][i])
				{
					flag = 1;
					int temp = M[j][i];
					M[j][i] = M[j + 1][i];
					M[j + 1][i] = temp;
				}

			}
		}
	}
	output(M, row, col);
}
int main()
{
	int M1[10][c] = {0}, M2[10][c] = { 0 }, M3[10][c] = { 0 }, M4[10][c] = {0};
	int c1, c2, r1, r2,r3,c3,r4,c4;
	input(M1, M2, r1, r2, c1, c2);
	cout << "Diagnal Print : \n";
	diagnalprint(M1, r1, c1);
	cout << "Reverse Diagnal Print : \n";
	diagnalcross(M2, r2, c2);
	cout << "------------------\n";
	cout << "Addition : \n";
	cout << "------------------\n";
	add(M1, M2, M3, r1, r2, r3, c1, c2, c3);
	cout << "------------------\n";
	cout << "Multiplication : \n";
	cout << "------------------\n";
	Multiply(M1, M2, M4, r1, r2, r4, c1, c2, c4);
	cout << "Sort by Column : \n";
	sortcolumn(M1, r1, c1);
}