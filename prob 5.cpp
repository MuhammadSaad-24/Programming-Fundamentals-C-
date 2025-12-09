//#include<iostream>
//using namespace std;
//int main() 
//{
//	int n, r,n1,n_r,r1;
//	float n_factorial = 1, r_factorial = 1, n_r_factorial = 1,nPr, nCr,nCr1;
//	bool flag1 = 1, flag2 = 1;
//	cout << "Enter n :";
//	cin >> n ;	
//	cout << "Enter r :";
//	cin >> r;
//	if (n < r || r < 0 || n < 0) 
//	{
//		cout << " Invalid n and r :" << endl;
//		flag1 = 0;
//	}
//	if (n == 0  || r == 0) 
//	{
//		cout << "Choices and Selection could not be 0" << endl;
//		flag2 = 0;
//	}
//	if (flag1 == 1 && flag2 == 1)
//	{
//		n1 = n;
//		r1 = r;
//		n_r = n - r;
//		for (; n1 > 0; n1--)
//		{
//			n_factorial *= n1;
//		}
//		for (; r1 > 0; r1--)
//		{
//			r_factorial *= r1;
//		}
//		for (; n_r > 0; n_r--)
//		{
//			n_r_factorial *= n_r;
//		}
//		nPr = n_factorial / n_r_factorial;
//		nCr = n_factorial / (n_r_factorial * r_factorial);
//		nCr1 = nPr / r_factorial;
//		cout << n << "P" << r << " = " << n << "! / (" << n << "-" << r << ")!" << " = " << nPr << endl;
//		cout << n << "C" << r << " = " << n << "! / ((" << n << "-" << r << ")! * " << r << "!)" << " = " << nCr << endl;
//		cout << n << "C" << r << " = " << n << "P" << r << " / " << r << "!" << " = " << nCr1 << endl;
//	}
//}