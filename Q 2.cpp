//#include<iostream>
//using namespace std;
//int fact(int n)
//{
//	int fact = 1;
//	for (int i = 1; i < n; i++)
//	{
//		fact *= i;
//	}
//	return fact;
//}
//double sum(int x, int n)
//
//{
//	int powerx = 1;
//	int pcopy = n;
//	double sum = 0;
//	for (int i=0; i< n; i++)
//	{
//		for (int j = 0; j < pcopy; j++)
//		{
//			powerx *= x;
//		}
//		sum += (double)fact(pcopy) / powerx;
//		powerx = 1;
//	}
//	return sum;
//
//
//
//}
//
//void printterm(int x, int n)
//{
//	cout << n << "!/" << x << "^" << n<<"+";
//}
//void series(int x, int n)
//{
//	int copy = x;
//	int power = 1;
//	int totaliteration = 0;
//	int pcopy = power;
//	for (int i = 0; i < n; i++)
//	{
//		printterm(copy, pcopy);
//		pcopy += 2;
//		cout << sum(x, n);
//	}
//	 
//}
//
//
//
//int main()
//{
//	int x = 0;
//	int n = 0;
//	cout << "input x = " << x << " n = " << n;
//	cin >> x >> n;
//	series(x, n);
//	return 0;
//}
//
//
//
