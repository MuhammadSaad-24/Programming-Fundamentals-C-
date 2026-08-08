#include<iostream>
using namespace std;
int presence(char arr[][7], char code[], int start)
{
	for (int a = 0; a < 26; a++)
	{
		bool flag = 1;
		for (int j = 1,k = 0; j < 6 && flag == 1; j++,k++)
		{
			if (code[start + k] != arr[a][j])
			{
				flag = 0;
			}
		}
		if (flag)
		{
			return a;
		}	
	}
	return -1;
}
void decode(char arr[][7], char code[])
{
	int size = 0;
	int index;
	for (int i = 0; code[i] != '\0'; i += 5)
	{
		index = presence(arr, code, i);
		if (index == -1)
			cout << " ";
		else
			cout << arr[index][0];
	}
}
int main()
{
	char arr[100];
	char code[27][7] =
	{   { "A.---."} , {"B-...-"},{"C-.--."},{"D---.."},
		{"E.-.-."},{ "F..--." }, { "G----." }, { "H....-" }, { "I..---" },
		{ "J.----" },{"K--.--" }, { "L..--." }, { "M---.-" }, { "N--..." }, { "O-----" },
		{ "P-.---" },{ "Q-..--" }, { "R.-..." }, { "S...--" }, { "T-...." }, { "U..-.." },
		{ "V...-."},{ "W--.-." }, { "X-..-." }, { "Y-.-.-" },{"Z--..-"} 
	};
	cout << "Enter Number of characters : ";
	int size;
	do
	{
		cin >> size;
	} while (size % 5 != 0 || size > 100);
	cout << "Enter Encoded Message : ";
	for (int i = 0; i < size; i++)
	{
		do
		{
			cin >> arr[i];
			if (arr[i] != '-' && arr[i] != '.')
				cout << "Enter code digit only as - or .";
		} while(arr[i] != '-' && arr[i] != '.');
	}
	arr[size] = '\0';
	decode(code, arr);
}