//#include<iostream>
//using namespace std;
//int main()
//{
//	int count, count_even, total_sum, code ,sum_odd = 0,sum_even = 0;
//	bool flag = 1;
//	cout << "Enter Credit Card Number : ";
//	cin >> code;
//	if (code < 10000000 || code > 100000000)
//	{
//		cout << "Enter 8-Digit Credit Card Number ";
//		flag = 0;
//	}
//	if (flag == 1)
//	{
//		for (count = 1; code > 0; code /= 10, count++)
//		{
//			if (count % 2 != 0)
//				sum_odd += code % 10;
//			else
//			{
//				count_even = 2 * (code % 10);
//				for (count_even; count_even > 0; count_even /= 10)
//					sum_even += count_even % 10;
//			}
//		}
//		total_sum = sum_odd + sum_even;
//		if (total_sum % 10 == 0)
//			cout << "\nValid Credit Card Number " << endl;
//		else
//			cout << "\nInvalid Credit Card Number " << endl;
//	}
//}