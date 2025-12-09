//#include<iostream>
//using namespace std;
//bool MatchAtPosition(char* text, char* pattern, int startpos)
//{
//	int start = startpos + 1;
//	bool flag = 0;
//	if (text[startpos] == pattern[0])
//	{
//		flag = 1;
//		for (int j = 1; pattern[j] != '\0' && flag == 1; j++, start++)
//		{
//			if (pattern[j] != text[start] && pattern[j] != '*' && pattern[j] != '?')
//			{
//				flag = 0;
//			}
//			else if (pattern[j] == '*')
//			{
//				while (pattern[j + 1] != text[start] && text[start] != '\0')
//				{
//					start++;
//				}
//				if (text[start] == '\0' && pattern[j + 1] == '\0')
//				{
//					return 1;
//				}
//				else if (pattern[j + 1] == text[start])
//				{
//					start--;
//				}
//			}
//		}
//	}
//	else if (pattern[1] == text[startpos + 1] && (pattern[0] == '*' || pattern[0] == '?'))
//	{
//		flag = 1;
//		for (int j = 1; pattern[j] != '\0' && flag == 1; j++, start++)
//		{
//			if (pattern[j] != text[start] && pattern[j] != '*' && pattern[j] != '?')
//			{
//				flag = 0;
//			}
//			else if (pattern[j] == '*')
//			{
//				while (pattern[j + 1] != text[start] && text[start] != '\0')
//				{
//					start++;
//				}
//				if (pattern[j + 1] == text[start])
//				{
//					start--;
//				}
//				else if (text[start] == '\0')
//				{
//					return 1;
//				}
//			}
//		}
//	}
//	if (flag)
//		return 1;
//	else
//		return 0;
//}
//bool MatchPattern(char* text, char* pattern)
//{
//	int size = 0;
//	while (text[size] != '\0')size++;
//	for (int i = 0; text[i] != '\0'; i++)
//	{
//		if (MatchAtPosition(text, pattern, i))
//		{
//			cout << "Checking Pattern " << pattern << " at position " << i <<endl;
//			return 1;
//		}
//	}
//	cout << "Checking Pattern " << pattern << " at all positions \n";
//	return 0;
//}
//void DisplayMatchingProcess(char text[][100], char* pattern, bool results[], int rows)
//{
//	cout << "=== Pattern Matching Process === \n";
//	for (int i = 0; i < rows; i++)
//	{
//		cout << "\nRow " << i << " :  '" <<text[i] << "' \n";
//		results[i] = MatchPattern(text[i], pattern);
//		if (results[i])
//			cout << "Match Found : \n";
//		else 
//			cout << "Match Not Found : \n";
//	}
//	cout << "\n=== Final Results ===\n";
//	for (int i = 0; i < rows; i++)
//	{
//		cout << "Row " << i << " : ";
//		if (results[i])
//			cout << "YES\n";
//		else
//			cout << "NO\n";
//	}
//	cout << "\nBoolean Array [";
//	for (int i = 0; i < rows; i++)
//	{
//		if (i != rows - 1)
//			cout << results[i] << ",";
//		else
//			cout << results[i];
//	}
//	cout << "]" << endl;
//}
//float CalculateMatchPercentage(bool results[], int totalRows)
//{
//	float match = 0;
//	cout << "\n=== Matched Rows Percentage ===" << endl;
//	cout << "Total Rows : " << totalRows <<endl;
//	for (int i = 0; i < totalRows; i++)
//	{
//		if (results[i])
//			match++;
//	}
//	cout << "Rows Matched : " << match << endl;
//	return match / totalRows;
//}
//int main()
//{
//	char arr[50][100] = {0}, sub[100];
//	int row, length;
//	bool result[50];
//	cout << "Enter number of rows (Max 50) : ";
//	cin >> row;
//	while (50 < row)
//	{
//		cout << "Enter rows <= 50";
//		cin >> row;
//	} 
//	cout << "Enter length of each string (Max 100): ";
//	cin >> length;
//	while (100 < length)
//	{
//		cout << "Enter length <= 100 ";
//		cin >> length;
//	}
//	cout << "Enter strings :\n";
//	for (int i = 0; i < row; i++)
//	{
//		cin.get();
//		cin.get(arr[i], length);
//		for (int j = 0; j < length && arr[i][j] != '\0'; j++)
//		{
//			while((arr[i][j] < 97 && arr[i][j] > 122))
//			{
//				cout << "Enter only lower case letter : \n";
//				cin.get();
//				cin.get(arr[i],length);
//			} 
//		}
//	}
//	cout << "Enter pattern string : ";
//	cin.get();
//	cin.get(sub, length);
//	for (int j = 0; j < length && sub[j] != '\0'; j++)
//	{
//		while ((sub[j] < 97 && sub[j] > 122) && sub[j] != '?' && sub[j] != '*')
//		{
//			cout << "Enter only lower case letter and for pattern ? and * : \n";
//			cin.get(sub, length);
//		}
//	}
//	DisplayMatchingProcess(arr, sub, result, row);
//	cout << CalculateMatchPercentage(result, row) << "%";
//}