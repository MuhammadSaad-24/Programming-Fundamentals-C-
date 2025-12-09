#include<iostream>
using namespace std;
void countletters(char arr[])//count cosecutive letters and put number in array
{
	int max = -9999, maxind = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		int length = 0;
		int j;
		for (j = i; arr[j] != '\0' && arr[i] == arr[j]; j++)
		{
			length++;
		}
		if (arr[i] == arr[i + 1])
		{
			for (int j = i; arr[j] != '\0'; j++)
			{
				arr[j] = arr[j + 1];
			}
		}
		int size = 0;
		for (int i = 0; arr[i] != '\0'; i++)
		{
			size++;
		}
		for (int k = size; k > i; k--)
		{
			arr[k + 1] = arr[k];
		}
		arr[i + 1] = length + '0';
		i++;
	}
	cout << arr;
}
void checkrepitition(char arr[])
{
	int max = -9999, maxind = 0;
	char maxch;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		int length = 0;
		int j;
		for (j = i; arr[j] != '\0' && arr[i] == arr[j]; j++)
		{
			length++;
		}
		if (length > max)
		{
			max = length;
			maxind = i;
			maxch = arr[i];
		}

	}
	cout << "\nCharacter : " << maxch << endl;
	cout << "Length : " << max << endl;
	cout << "Index of starting : " << maxind << endl;
	
}
void removevowels(char arr[])
{
	int size = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		size++;
	}
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i - 1] == 'a' || arr[i - 1] == 'i' || arr[i - 1] == 'e' || arr[i - 1] == 'o' || arr[i - 1] == 'u' || arr[i - 1] == 'A' || arr[i - 1] == 'I' || arr[i - 1] == 'E' || arr[i - 1] == 'O' || arr[i - 1] == 'U')
		{
			i--;
		}
		if (arr[i] == 'a' || arr[i] == 'i' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'I' || arr[i] == 'E' || arr[i] == 'O' || arr[i] == 'U')
		{
			for (int j = i; arr[j] != '\0'; j++)
			{
				arr[j] = arr[j + 1];
			}
		}

	}
	cout << "After removing vowels :";
	cout << arr;
}
int main()
{
	char arr[100];
	cin.getline(arr, 100);
	removevowels(arr);
	checkrepitition(arr);
	countletters(arr);
}