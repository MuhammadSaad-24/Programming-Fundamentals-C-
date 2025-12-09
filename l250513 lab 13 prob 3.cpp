//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	fstream input;
//	char arr[100];
//	cout << "Enter Sentence : ";
//	cin.get(arr, 100);
//	input.open("input.txt", ios::out);
//	input << arr;
//	input.close();
//	input.open("input.txt", ios::in);
//	int ch = 0,spaces = 0,commas = 0,fulstop = 0,numbers = 0;
//	char character;
//	while (!input.eof())
//	{
//		input.get(character);
//		if ((character >= 65 && character <= 90) || (character >= 97 && character <= 122))
//			ch++;
//		else if (character == ' ')
//			spaces++;
//		else if (character == ',')
//			commas++;
//		else if (character == '.')
//			fulstop++;
//		else if (character >= 48 && character <= 57)
//			numbers++;
//	}
//	input.close();
//	fstream output;
//	output.open("output.txt", ios::out);
//	output << "Letters = " << ch << endl;
//	output << "Spaces = " << spaces << endl;
//	output << "Commas = " << commas << endl;
//	output << "Fulstops = " << fulstop << endl;
//	output << "Numbers = " << numbers << endl;
//	output.close();
//}