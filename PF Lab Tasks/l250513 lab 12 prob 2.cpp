//#include<iostream>
//using namespace std;
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
//	cout << arr;
//}
//int main()
//{
//	char arr[50];
//	cout << "Enter Line to Reverse : ";
//	cin.getline(arr, 50);
//	reversearray(arr);
//}