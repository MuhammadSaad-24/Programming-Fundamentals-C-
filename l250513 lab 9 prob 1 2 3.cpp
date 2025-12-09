//#include<iostream>
//using namespace std;
//int ternarysearch(int arr[], int size, int bookind)
//{
//	int start = 0, end = size - 1;
//	while (start <= end)
//	{
//		int mid1 = (start + end) / 3, mid2 = ((start + end) * 2) / 3;
//		if (arr[mid1] == bookind)
//			return mid1;
//		else if(arr[mid2] == bookind)
//			return mid2;
//		if (arr[mid1] > bookind)
//		{
//			end = mid1 - 1;
//		}
//		else if (arr[mid1] < bookind && arr[mid2] > bookind)
//		{
//			start = mid1 + 1;
//			end = mid2 - 1;
//		}
//		else
//		{
//			start = mid2 + 1;
//		}
//	}
//	
//}
//void bubblesort(int arr[], int size)
//{
//	bool flag = 0;
//	while (flag == 0)
//	{
//		flag = 1;
//		for (int i = 0; i < size - 1; i++)
//		{
//			if (arr[i + 1] < arr[i])
//			{
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//				flag = 0;
//			}
//		}
//	}
//	cout << "Bubble Sorted Array :";
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void insertionsort(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int k = i + 1; k < size; k++)
//		{
//			if (arr[i] < arr[k])
//			{
//				for (int j = k - 1; j >= 0; j--)
//				{
//					if (arr[j] < arr[j+1])
//					{
//						int temp1 = arr[j+1];
//						arr[j+1] = arr[j];
//						arr[j] = temp1;
//					}
//				}
//			}
//		}
//	}
//	cout << "Insertion Sorted Array :";
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	int arr[100];
//	int size;
//	cout << "Enter Size of array :";
//	cin >> size;
//	cout << "Enter array Elements :\n";
//	for (int i = 0; i < size; i++)
//		cin >> arr[i];
//	insertionsort(arr, size);
//	bubblesort(arr, size);
//	int bookind;
//	cout << "Enter Book index to find :";
//	cin >> bookind;
//	cout << "Book Index " << bookind << " is at : ";
//	cout << ternarysearch(arr, size, bookind);
//}