//#include<iostream>
//#include<conio.h>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//int main ()
//{
//	int player1, player2,tplayer1 = 0,tplayer2 = 0;
//	bool flag1 = 1,flag2 = 1;
//	srand(time(0));
//	do
//	{
//		if (flag1 == 1)
//		{
//			cout << "Player 1 Turn (Press any Key to make move) : ";
//			char ch1 = _getch();
//			int player1 = rand();
//			player1 = player1 % 6 + 1;
//			cout << player1 << endl;
//			tplayer1 += player1;
//			if (tplayer1 > 20)
//			{
//				tplayer1 -= player1;
//				cout << "Player 1 Total : " << tplayer1 << " (Move not Possible)" << endl;
//			}
//			else
//				cout << "Player 1 Total : " << tplayer1 << endl;
//			if (tplayer1 == 20)
//			{
//				cout << "Player 1 Wins !!! " << endl;
//				flag2 = 0;
//			}
//		}
//		if (flag2 == 1)
//		{
//			cout << "Player 2 Turn (Press any Key to make move) : ";
//			char ch2 = _getch();
//			int player2 = rand();
//			player2 = player2 % 6 + 1;
//			cout << player2 << endl;
//			tplayer2 += player2;
//			if (tplayer2 > 20)
//			{
//				tplayer2 -= player2;
//				cout << "Player 2 Total : " << tplayer2 << " (Move not Possible)" << endl;
//			}
//			else
//				cout << "Player 2 Total : " << tplayer2 << endl;
//			if (tplayer2 == 20)
//			{
//				cout << "Player 2 Wins !!! " << endl;
//			}
//		}
//		} while (tplayer1 != 20 && tplayer2 != 20);
//		
//	
//}