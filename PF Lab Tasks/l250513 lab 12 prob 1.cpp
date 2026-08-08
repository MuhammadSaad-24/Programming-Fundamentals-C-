//#include<iostream>
//using namespace std;
//void display(char arr[5], int r, int c)
//{
//	cout << arr;
//	cout << " Found at " << r << "," << c << endl;
//}
//void searchword(char arr[6][6], char search[])
//{
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			if (arr[i][j] == search[0])
//			{
//				int r = i, c = j;
//				int flag = 0;
//				for (int k = 1; flag == 0 && r < 6 && k < 5; k++)
//				{
//					r++;
//					if (arr[r][c] != search[k])
//						flag = 1;
//				}
//				if (!flag)
//				{
//					display(search, i, j);
//				}
//				flag = 0;
//				r = i, c = j;
//				for (int k = 1; flag == 0 && r >= 0 && k < 5; k++)
//				{
//					r--;
//					if (arr[r][c] != search[k])
//						flag = 1;
//				}
//				if (!flag)
//				{
//					display(search, i, j);
//				}
//				flag = 0;
//				r = i, c = j;
//				for (int k = 1; flag == 0 && c < 6 && k < 5; k++)
//				{
//					c++;
//					if (arr[r][c] != search[k])
//						flag = 1;
//				}
//				if (!flag)
//				{
//					display(search, i, j);
//				}
//				flag = 0;
//				r = i, c = j;
//				for (int k = 1; flag == 0 && c >= 0 && k < 5; k++)
//				{
//					c--;
//					if (arr[r][c] != search[k])
//						flag = 1;
//				}
//				if (!flag)
//				{
//					display(search, i, j);
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	char arr[6][6] = { {'B, B', 'M', 'B', 'B', 'B'},
//					   {'C', 'M','A','G','I', 'C'},
//					   {'I', 'B', 'G', 'B', 'B','B'},
//					   {'G', 'B', 'I', 'B', 'B', 'B'},
//					   {'A', 'B', 'C', 'B', 'B', 'B'},
//					   {'M', 'C', 'I', 'G', 'A', 'M'} };
//	char search[6] = { 'M','A','G','I','C','\0' };
//	searchword(arr, search);
//}