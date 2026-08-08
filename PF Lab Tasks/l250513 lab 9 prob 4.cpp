#include<iostream>
using namespace std;
int searchelement(int arr[], int size)
{
	int sum = 0, max = -9999999;
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
			max = arr[i];
		sum += arr[i];
	}
	int series = (max * (max + 1)) / 2 ;
	return series - sum;
}
int main()
{
	int arr[100];
	int size;
	cout << "Enter Size of Array : ";
	cin >> size;
	cout << "Enter of Elements Array : " << endl;
	for (int i = 0; i < size; i++)
	{
		do 
		{
			cin >> arr[i];
		} while (arr[i] <= 0);
	}
	cout << "Missing Number is : ";
	cout << searchelement(arr, size);
}