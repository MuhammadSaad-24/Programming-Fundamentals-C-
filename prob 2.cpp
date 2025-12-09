//#include<iostream>
//using namespace std;
//int main()
//{
//	int mode2, num, add1, add2, mode1, prime_add_check = 0;
//	bool flag1 = 1, flag2 = 1;
//	cout << "Enter Positive Integer (for prime addition): ";
//	cin >> num;
//	if (num > 0)
//	{
//		for (add1 = 2; num > add1; add1++)
//		{
//			flag1 = 1, flag2 = 1;
//			add2 = num - add1;
//			if (add1 <= add2) {
//				for (int prime_checker1 = 2; flag1 == 1 && add1 > prime_checker1; prime_checker1++)
//				{
//					mode1 = add1 % prime_checker1;
//					if (mode1 == 0)
//						flag1 = 0;
//				}
//				for (int prime_checker2 = 2; flag2 == 1 && add2 > prime_checker2; prime_checker2++)
//				{
//					mode2 = add2 % prime_checker2;
//					if (mode2 == 0)
//						flag2 = 0;
//				}
//				if (flag1 == 1 && flag2 == 1)
//				{
//					cout << "Possible Prime Addition : ";
//					cout << num << " = " << add2 << " + " << add1 << endl;
//					prime_add_check++;
//				}
//			}
//		}
//		if (prime_add_check == 0)
//		{
//			cout << "No possible prime addition " << endl;
//		}
//	}
//	else
//		cout << "Enter Positive Integer : " << endl;
//}
