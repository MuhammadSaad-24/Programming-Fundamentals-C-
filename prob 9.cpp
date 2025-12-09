//#include<iostream>
//using namespace std;
//int main()
//{
//	int num1, count, num, max = 0, num_l = 0;
//	cout << "Enter Number : ";
//	cin >> num;
//	while (num <= 0)
//	{
//		cout << "Not a Positive Number : " << endl;
//		cout << "Enter Number : ";
//		cin >> num;
//	}
//	if (num > 0)
//	{
//		for (; num > 1; num--)
//		{
//			num1 = num;
//			for (count = 0; num1 > 1; count++)
//			{
//				if (num1 % 2 == 0)
//					num1 /= 2;
//				else
//					num1 = 3 * num1 + 1;
//			}
//			if (max < count)
//			{
//				max = count;
//				num_l = num;
//			}
//		}
//		cout << "Number "<< num_l << " with Largest Sequence : " << max << endl;
//	}
//}