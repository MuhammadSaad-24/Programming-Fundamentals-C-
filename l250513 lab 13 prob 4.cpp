//#include<iostream>
//#include<fstream>
//#include<iomanip>
//using namespace std;
//int const c = 10;
//void output(int M[][c], int row, int col)
//{
//	cout << " Matrix : \n\n";
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout <<setw(3)<< M[i][j];
//		}
//		cout << endl;
//	}
//	cout << "-------------------" << endl;
//}
//void Input(int M1[][c], int M2[][c], int &r1, int &r2, int &c1, int &c2)
//{
//	fstream input;
//	input.open("Matrix.txt", ios::in);
//	input >> r1 >> c1;
//	for (int i = 0; i < r1; i++)
//	{
//		for (int j = 0; j < c1; j++)
//		{
//			input >> M1[i][j];
//		}
//	}
//	output(M1, r1, c1);
//	input >> r2 >> c2;
//	for (int i = 0; i < r2; i++)
//	{
//		for (int j = 0; j < c2; j++)
//		{
//			input >> M2[i][j];
//		}
//	}
//	output(M2, r2, c2);
//}
//bool add(int M1[][c], int M2[][c], int M3[][c], int r1, int r2, int& r3, int c1, int c2, int& c3)
//{
//	if (r1 != r2 || c1 != c2)
//	{
//		cout << "Not Possible : \n";
//		return 0;
//	}
//	else
//	{
//		r3 = r1;
//		c3 = c1;
//		for (int i = 0; i < r3; i++)
//		{
//			for (int j = 0; j < c3; j++)
//			{
//				M3[i][j] = M1[i][j] + M2[i][j];
//			}
//		}
//		output(M3, r3, c3);
//	}
//	return 1;
//}
//bool Multiply(int M1[][c], int M2[][c], int M3[][c], int r1, int r2, int& r3, int c1, int c2, int& c3)
//{
//	if (r2 != c1)
//	{
//		cout << "Multiplication not Possible : \n";
//		return 0;
//	}
//	else
//	{
//		c3 = c2;
//		r3 = r1;
//		M3[r3][c3] = { 0 };
//		for (int i = 0; i < r3; i++)
//		{
//			for (int j = 0; j < c3; j++)
//			{
//				for (int k = 0; k < c1; k++)
//				{
//					M3[i][j] += M1[i][k] * M2[k][j];
//				}
//			}
//		}
//	}
//	cout << " Matrix : \n\n";
//	for (int i = 0; i < r3; i++)
//	{
//		for (int j = 0; j < c3; j++)
//		{
//			cout << setw(5) << M3[i][j];
//		}
//		cout << endl;
//	}
//	return 1;
//}
//void sortcolumn(int M[][c], int row, int col)
//{
//	for (int i = 0; i < col; i++)
//	{
//		bool flag = 1;
//		while (flag)
//		{
//			flag = 0;
//			for (int j = 0; j < row - 1; j++)
//			{
//				if (M[j + 1][i] < M[j][i])
//				{
//					flag = 1;
//					int temp = M[j][i];
//					M[j][i] = M[j + 1][i];
//					M[j + 1][i] = temp;
//				}
//
//			}
//		}
//	}
//	output(M, row, col);
//}
//int main()
//{
//	int M1[10][c] = {0}, M2[10][c] = {0}, M3[10][c] = {0}, M4[10][c] = {0}, r1, r2, r3, r4, c1, c2, c3, c4;
//	Input(M1, M2, r1, r2, c1, c2);
//	cout << "\n\n Addition ";
//	add(M1, M2, M3, r1, r2, r3, c1, c2, c3);
//	cout << "\n\n Multiplication ";
//	Multiply(M1, M2, M4, r1, r2, r4, c1, c2, c4);
//	cout << "\n\n Sort Column ";
//	sortcolumn(M2, r2, c2);
//}