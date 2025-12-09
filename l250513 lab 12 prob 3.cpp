//#include<iostream>
//using namespace std;
//void Sort(char arr[10][30], int limit)
//{
//	bool flag = 0;
//	while (!flag)
//	{
//		flag = 1;
//		for (int i = 0; i < limit - 1; i++)
//		{
//			int size1 = 0, size2 = 0;
//			if (arr[i][0] > arr[i + 1][0])
//			{
//				flag = 0;
//				for (int j = 0; arr[i][j]; j++)size1++;
//				size1--;
//				for (int j = 0; arr[i + 1][j]; j++)size2++;
//				size2--;
//				if (size1 > size2)
//				{
//					int j;
//					for (j = 0; '\0' != arr[i][j]; j++)
//					{
//						char temp = arr[i + 1][j];
//						arr[i + 1][j] = arr[i][j];
//						arr[i][j] = temp;
//					}
//					arr[i][++size2] = '\0';
//					arr[i + 1][++size1] = '\0';
//				}
//				else if (size2 > size1)
//				{
//					int j;
//					for (j = 0; '\0' != arr[i + 1][j]; j++)
//					{
//						char temp = arr[i + 1][j];
//						arr[i + 1][j] = arr[i][j];
//						arr[i][j] = temp;
//					}
//					arr[i][++size2] = '\0';
//					arr[i + 1][++size1] = '\0';
//				}
//			}
//		}
//	}
//	cout << "Sorted Names are : \n";
//	for (int i = 0; i < limit; i++)
//	{
//		cout << arr[i]<< endl;
//	}
//}
//void remove(char arr[10][30], int &limit)
//{
//	char removearr[30];
//	cout << "Enter Name to Remove : ";
//	cin.getline(removearr, 30);
//	int flag1 = 0;
//	for (int i = 0; i < limit; i++)
//	{
//		if (arr[i][0] == removearr[0])
//		{
//			bool flag = 1;
//			for (int j = 1; removearr[j] != '\0'; j++)
//			{
//				if (arr[i][j] != removearr[j])
//					flag = 0;
//			}
//			if (flag)
//			{
//				flag1++;
//				limit--;
//				for (int k = i; k < limit; k++)
//				{
//					int size = 0;
//					for (int j = 0; arr[k + 1][j] != '\0'; j++)size++;
//					for (int j = 0; arr[k + 1][j] != '\0'; j++)
//					{
//						arr[k][j] = arr[k + 1][j];
//					}
//					arr[k][size] = '\0';
//				}
//			}
//		}
//	}
//	if (!flag1)
//		cout << "Name Not Founded : ";
//	cout << "Names are : \n";
//	for (int i = 0; i < limit; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//void reversearray(char arr[])
//{
//	int size = 0;
//	for (int i = 0; arr[i] != '\0'; i++)size++;
//	size--;
//	for (int i = 0; i <= size / 2; i++)
//	{
//		char temp = arr[i];
//		arr[i] = arr[size - i];
//		arr[size - i] = temp;
//	}
//	int start = 0, end;
//	size++;
//	for (int i = 0; i <= size; i++)
//	{
//		if (arr[i] == ' ' || arr[i] == '\0')
//		{
//			end = i;
//			end--;
//			int j = start;
//			int a = 0;
//			for (; j <= (start + end) / 2; j++)
//			{
//				char temp = arr[j];
//				arr[j] = arr[end - a];
//				arr[end - a] = temp;
//				a++;
//			}
//			start = i + 1;
//		}
//	}
//	cout << arr << endl;
//}
//int main()
//{
//	char arr[10][30];
//	int limit;
//	do
//	{
//		cout << "Enter Number of Names : ";
//		cin >> limit;
//	} while (limit < 0 || limit > 10);
//cin.get();
//	for (int i = 0; i < limit; i++)
//	{
//		cout << "Enter Name " << i + 1<< " : ";
//		cin.getline(arr[i], 30);
//	}
//	Sort(arr, limit);
//	cout << "Remove Names : ";
//	remove(arr, limit);
//	cout << "Reverse names : \n";
//	cout << "Names are : \n";
//	for (int i = 0; i < limit; i++)
//	{
//		reversearray(arr[i]);
//	}
//}
