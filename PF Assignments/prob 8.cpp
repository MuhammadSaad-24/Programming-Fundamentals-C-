//#include<iostream>
//#include<ctime>
//using namespace std;
//int main()
//{
//	srand(time(0));
//	int a = 1, k, q, s, num, turn, computer, human, stupid_smart;
//	bool flag1 = 1, flag2 = 1, flag3 = 1, flag4 = 1, flag5 = 1, flag6 = 1, flag7 = 1, flag8 = 1;
//	num = rand();
//	num = num % 91 + 10;
//	turn = rand();
//	turn %= 2;
//	stupid_smart = rand();
//	stupid_smart %= 2;
//	cout << "Total Number : " << num << endl;
//	if (stupid_smart == 1)
//		cout << "Smart Computer : " << endl;
//	else
//		cout << "Stupid Computer : " << endl;
//	if (turn == 1)
//		cout << "You Play First : " << endl;
//	else
//		cout << "Computer Play First : " << endl;
//	while (num > 1)
//	{
//		a = 1;
//		k = num / 2;
//		q = num / 2;
//		for (k; k >= 2; a++)
//		{
//			k /= 2;
//		}
//		s = num - pow(2, a) + 1;
//		if (turn == 0 && stupid_smart == 1)
//		{
//			if (flag1 == 1)
//			{
//				if (s < 0)
//					a--;
//				cout << "Computer Turn : " << num - pow(2, a) + 1 << endl;
//				num = pow(2, a) - 1;
//				cout << "Total Number : " << num << endl;
//				if (num == 1)
//				{
//					flag2 = 0;
//					cout << "YOU LOOSE !!!!! " << endl;
//				}
//			}
//			if (flag2 == 1)
//			{
//				q = num / 2;
//				cout << "Your Turn :";
//				cin >> human;
//				while (human > q || human < 0)
//				{
//					cout << "Enter Value less or Equal (but Greater than 0) to : " << q << endl;
//					cout << "Your Turn :";
//					cin >> human;
//				}
//				num -= human;
//				cout << "Total Number : " << num << endl;
//				if (num == 1)
//				{
//					flag1 = 0;
//					cout << "COMPUTER LOOSE !!!!! " << endl;
//				}
//			}
//		}
//		else if (turn == 0 && stupid_smart == 0)
//		{
//			if (flag3 == 1)
//			{
//				computer = rand();
//				computer = computer % (num / 2) + 1;
//				cout << "Computer Turn : " << computer << endl;
//				num -= computer;
//				cout << "Total Number : " << num << endl;
//				if (num == 1)
//				{
//					flag4 = 0;
//					cout << "YOU LOOSE !!!!! " << endl;
//				}
//			}
//			if (flag4 == 1)
//			{
//				q = num / 2;
//				cout << "Your Turn : ";
//				cin >> human;
//				while (human > q || human < 0)
//				{
//					cout << "Enter Value less or Equal (but Greater than 0) to : " << q << endl;
//					cout << "Your Turn :";
//					cin >> human;
//				}
//				num -= human;
//				cout << "Total Number : " << num << endl;
//				if (num == 1)
//				{
//					flag3 = 0;
//					cout << "COMPUTER LOOSE !!!!! " << endl;
//				}
//			}
//		}
//		else if (turn == 1 && stupid_smart == 1)
//		{
//			if (flag6 == 1)
//			{
//				cout << "Your Turn :";
//				cin >> human;
//				while (human > q || human < 0)
//				{
//					cout << "Enter Value less or Equal (but Greater than 0) to : " << q << endl;
//					cout << "Your Turn :";
//					cin >> human;
//				}
//				num -= human;
//				cout << "Total Number : " << num << endl;
//				if (num == 1)
//				{
//					flag5 = 0;
//					cout << "COMPUTER LOOSE !!!!! " << endl;
//				}
//			}
//			if (flag5 == 1)
//			{
//				if (s < 0 || num == q)
//					a--;
//				if (num != pow(2, a) - 1)
//				{
//					computer = num - pow(2, a) + 1;
//					num = pow(2, a) - 1;
//				}
//				else if (num == pow(2, a) - 1 && a > 2)
//				{
//					a--;
//					computer = num - (pow(2, a) + 1);
//					num = pow(2, a) + 1;
//				}
//				else if (num == pow(2, a) - 1 && a == 2)
//				{
//					a--;
//					computer = num - pow(2, a);
//					num -= computer;
//				}
//				else if (num == pow(2, a) - 1 && a == 1)
//				{
//					a--;
//					computer = pow(2, a);
//					num -= computer;
//				}
//				cout << "Computer Turn : " << computer << endl;
//				cout << "Total Number : " << num << endl;
//				if (num == 1)
//				{
//					flag6 = 0;
//					cout << "YOU LOOSE !!!!! " << endl;
//				}
//			}
//		}
//		else if (turn == 1 && stupid_smart == 0)
//		{
//			if (flag8 == 1)
//			{
//				cout << "Your Turn :";
//				cin >> human;
//				while (human > q || human < 0)
//				{
//					cout << "Enter Value less or Equal (but Greater than 0) to : " << q << endl;
//					cout << "Your Turn :";
//					cin >> human;
//				}
//				num -= human;
//				cout << "Total Number : " << num << endl;
//				if (num == 1)
//				{
//					flag7 = 0;
//					cout << "COMPUTER LOOSE !!!!! " << endl;
//				}
//			}
//			if (flag7 == 1)
//			{
//				computer = rand();
//				computer = computer % (num / 2) + 1;
//				cout << "Computer Turn : " << computer << endl;
//				num -= computer;
//				cout << "Total Number : " << num << endl;
//				if (num == 1)
//				{
//					flag8 = 0;
//					cout << "YOU LOOSE !!!!! " << endl;
//				}
//			}
//		}
//	}
//}
//		