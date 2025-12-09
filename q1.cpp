#include<iostream>
using namespace std;
void con(int input[], int sizeinput, int filter[], int sizefilter)
{
	for (int i = 0; i <= sizefilter; i++)
	{
		int sum = 0;
		for (int j = 0; j < sizefilter; j++)
		{
			sum += input[i + j] * filter[j];
		}
		cout << "Result : " << sum << endl;
	}


}

int main()
{
	int input[6] = { 1,1,1,1,1,1 };
	int filter[3] = { 1,4 };
	int sizei = 6;
	int sizef = 2;
	con(input, sizei, filter, sizef);
}